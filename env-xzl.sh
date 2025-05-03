#!/bin/sh
export KERNEL=/data/rpi4-workspace/kernel-rpi4-local/5.10

# native build. only kernel image and module 
build-kernel()
{
  cd $KERNEL
  make Image modules -j4
}

#$1:name
gen-header()
{
  if [ -z "$1" ]
  then
    echo "recording name must be specified"
    return 
  fi
  
  # backup
  if test -f "${KERNEL}/drivers/gpu/drm/v3d/gen/records-$1.h"; then
    BACKUP=/tmp/records-$1.h.`date +"%m-%d-%Y-%H%M%S"` 
    mv ${KERNEL}/drivers/gpu/drm/v3d/gen/records-$1.h \
    $BACKUP
    echo "backup => ${BACKUP}"
  fi  
  
  ${KERNEL}/parse-ftrace.py \
  ./ftrace.txt \
  -v $1 \
  > ${KERNEL}/drivers/gpu/drm/v3d/gen/records-$1.h  
  
  # save a local copy
  rm -f records-$1.h
  cp ${KERNEL}/drivers/gpu/drm/v3d/gen/records-$1.h .
  
  echo ">> here's the output:"
  ls -lh ${KERNEL}/drivers/gpu/drm/v3d/gen/records-$1.h  
  
  echo 
  echo
  tail ${KERNEL}/drivers/gpu/drm/v3d/gen/records-$1.h -n20
}

gen-header-py()
{
  gen-header py    
}

# $1-benchmark name
# vgg16, vgg16_int8, alexnet
run_ncnn()
{
  #export VK_ICD_FILENAMES=/home/pi/local-install/share/vulkan/icd.d/broadcom_icd.aarch64.json

  # run N times...
  # loopcount num_threads powerdevice gpu_device_id(-1 means CPU) cooldown
  LOOPCOUNT="${LOOPCOUNT:-2}"
  LOGFILE=${PWD}/$1-log.txt
   
  for i in {1..1}
  do
    cd /data/rpi4-workspace/ncnn/benchmark; \
    VK_ICD_FILENAMES=/home/pi/local-install/share/vulkan/icd.d/broadcom_icd.aarch64.json \
    ../Release/benchmark/benchncnn ${LOOPCOUNT} 1  0  0  0 $1 >${LOGFILE} 2>&1; \
    cd - 
  done    
}


toggle-recording()
{
  
  FILE=/sys/kernel/debug/dri/0/toggle_recording  
  if sudo test -f "$FILE"; then
      echo "using $FILE"
  else
      FILE=/sys/kernel/debug/dri/1/toggle_recording      
  fi  

  sudo cat $FILE 
}

# $1 - name
replay()
{
  echo "clear old dmesg..."
  sudo dmesg -c > /dev/null
  echo "replay starts $(date)"
  
  FILE=/sys/kernel/debug/dri/0/replay-$1  
  if sudo test -f "$FILE"; then
      echo "using $FILE"
  else
      FILE=/sys/kernel/debug/dri/1/replay-$1
  fi
  
  rm -f replay-$1.txt
  
  sudo cat $FILE | tee replay-$1.txt
  echo 
  echo 
  sudo dmesg >> replay-$1.txt  
#  sudo dmesg > replay-dmesg-$1.txt

  echo "--------------------------"
  tail   replay-$1.txt -n20
}

# $1 - the command to exec; $2 - name
record()
{
  echo "clear old dmesg..."
  sudo dmesg -c > /dev/null
  
  echo "replay starts $(date)"
  
  if [ -z "$2" ]
  then
    echo "recording name must be specified"
    return 
  fi

  read -n 1 -s -r -p "Will overwrite any ftrace & .elf. Press to continue"
  
  # clean up. note the way invoking sudo  
  echo | sudo tee /sys/kernel/debug/tracing/trace > /dev/null
  # enable all
  echo 1 | sudo tee /sys/kernel/debug/tracing/events/v3d/enable > /dev/null
  
  sudo rm -f /tmp/*.elf
  rm -f *.elf ftrace.txt
  
  #read -n 1 -s -r -p "Press to continue"
    
  $1
    
  sudo cat /sys/kernel/debug/tracing/trace > ./ftrace.txt
  #sudo chown pi:pi ./ftrace.txt  
  cp /tmp/*.elf .

  #sudo chown pi:pi ./ftrace.txt *.elf # unnecessary
    
  echo ">> here are the results..."
  
  ls -lh ftrace.txt *.elf    
  
  read -n 1 -s -r -p "Press any key to gen header"; echo
  gen-header $2  
}

reload()
{
  echo "reload kernel module"
  pushd .
  cd $KERNEL
  sudo rmmod v3d
  sudo insmod drivers/gpu/drm/v3d/v3d.ko
  popd 
}

record-headless()
{
  record "/data/rpi4-workspace/sascha-willems-computeheadless/run.sh" headless  
}

record-py()
{
  export PYTHONPATH=/data/rpi4-workspace/py-videocore6/ 
  record "python3 \
  /data/rpi4-workspace/py-videocore6/examples/sgemm.py" py
}

record-pysummation()
{
  export PYTHONPATH=/data/rpi4-workspace/py-videocore6/ 
  record "python3 \
  /data/rpi4-workspace/py-videocore6/examples/summation.py" pysummation
}

record-alexnet()
{
  record "run_ncnn alexnet"  alexnet
}

record-vgg16()
{
  record "run_ncnn vgg16"  vgg16
}

record-mobilenet()
{
  record "run_ncnn mobilenet"  mobilenet
}

record-resnet18()
{
  record "run_ncnn resnet18"  resnet18
}

record-sqz()
{
  record "run_ncnn squeezenet"  sqz
}

record-yolov4tiny()
{
  record "run_ncnn yolov4-tiny"  yolov4tiny
}
