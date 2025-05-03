#./reload-xzl.sh  # will disable ftrace 

export VK_ICD_FILENAMES=/home/pi/local-install/share/vulkan/icd.d/broadcom_icd.aarch64.json

#
# vgg16, vgg16_int8, alexnet, mobilenet, resnet18
#

# run N times...
# loopcount num_threads powerdevice gpu_device_id(-1 means CPU) cooldown 
for i in {1..1}
do
  cd /data/rpi4-workspace/ncnn/benchmark; \
  VK_ICD_FILENAMES=/home/pi/local-install/share/vulkan/icd.d/broadcom_icd.aarch64.json \
  ../Debug64/benchmark/benchncnn 1  1   0  0 0 resnet18; \
  cd - 
done
