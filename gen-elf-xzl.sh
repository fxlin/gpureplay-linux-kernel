dd if=/dev/urandom of=/tmp/my.bin bs=1M count=1
tail /tmp/my.bin -n10 | od

objcopy --input-target=binary \
--change-section-vma .data=0x80000000 \
--output-target=elf64-littleaarch64 \
/tmp/my.bin \
my.elf


ld -r -b binary /tmp/my.bin -o my.o
ld  my.o -static -nostdlib -o my.out