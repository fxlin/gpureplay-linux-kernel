#!/bin/bash
if [[ $EUID>0 ]]
  then echo "Please run as root"
  exit
fi

# clean up
echo > /sys/kernel/debug/tracing/trace
# enable all
echo 1 > /sys/kernel/debug/tracing/events/v3d/enable
rm -f /tmp/*.bin
rm -f /tmp/*.elf

#./run-computeheadless.sh
#/home/pi/rpi4-workspace/sascha-willems-computeheadless/run.sh
#/data/rpi4-workspace/sascha-willems/build-rpios64-rls/bin/computeheadless

/data/rpi4-workspace/sascha-willems-computeheadless/run.sh
#cd /data/rpi4-workspace/py-videocore6/; ./run.sh; cd -

cat /sys/kernel/debug/tracing/trace > /tmp/ftrace.txt

cp /tmp/ftrace.txt . 
cp /tmp/*.elf .

echo "here are the results..."

ls -lh ftrace.txt *.elf