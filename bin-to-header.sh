#OUTPUT="/tmp/bos.txt"

INPUT=/tmp  # no trailing /, which affect how xxd names objects
OUTPUT="drivers/gpu/drm/v3d/gen/bos.h"
OUTPUT2="/tmp/bos.h"

rm -f $OUTPUT $OUTPUT2

for bo in $INPUT/bo*.bin; do
  echo converting $bo ...
  xxd -i $bo >> $OUTPUT
done
 
cp $OUTPUT $OUTPUT2
echo "output: $OUTPUT $OUTPUT2"

#xxd -i /tmp/bo-0x00000020.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000040.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000060.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000080.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000120.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000140.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000160.bin >> $OUTPUT
#xxd -i /tmp/bo-0x00000180.bin >> $OUTPUT
#xxd -i /tmp/bo-0x000001a0.bin >> $OUTPUT

