#INPUT=/data/rpi4-workspace/trace/py-videocore6/ftrace.txt
#INPUT=/data/rpi4-workspace/trace/py-videocore6-2/ftrace.txt
#INPUT=/data/rpi4-workspace/trace/py-videocore6-3/ftrace.txt
#INPUT=/data/rpi4-workspace/trace/py-videocore6-4/ftrace.txt

./parse-ftrace.py \
/data/rpi4-workspace/trace/py-videocore6-5/ftrace.txt \
-v py \
> drivers/gpu/drm/v3d/gen/records-py.h

#INPUT=/data/rpi4-workspace/trace/py-videocore6-summation/ftrace.txt

./parse-ftrace.py \
/data/rpi4-workspace/trace/py-videocore6-summation/ftrace.txt \
-v pysummation \
> drivers/gpu/drm/v3d/gen/records-pysummation.h

#INPUT=/data/rpi4-workspace/trace/computeheadless-1/ftrace.txt
#INPUT=/data/rpi4-workspace/trace/computeheadless-2/ftrace.txt
#INPUT=/data/rpi4-workspace/trace/computeheadless-3/ftrace.txt
#INPUT=/data/rpi4-workspace/trace/computeheadless-4/ftrace.txt

#INPUT=/data/rpi4-workspace/trace/alexnet/ftrace.txt
#OUT=drivers/gpu/drm/v3d/gen/records.h

./parse-ftrace.py \
/data/rpi4-workspace/trace/computeheadless-5/ftrace.txt \
-v headless \
> drivers/gpu/drm/v3d/gen/records-headless.h

./parse-ftrace.py \
/data/rpi4-workspace/trace/alexnet/ftrace.txt \
-v alexnet \
> drivers/gpu/drm/v3d/gen/records-alexnet.h


./parse-ftrace.py \
/data/rpi4-workspace/trace/vgg16/ftrace.txt \
-v vgg16 \
> drivers/gpu/drm/v3d/gen/records-vgg16.h


# echo "written to $OUT"

