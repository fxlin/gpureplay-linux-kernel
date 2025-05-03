# cf: https://www.raspberrypi.org/documentation/linux/kernel/building.md

sudo make modules_install
sudo cp arch/arm64/boot/dts/broadcom/*.dtb  /boot/
sudo cp arch/arm/boot/dts/overlays/*.dtb* /boot/overlays/
sudo cp arch/arm64/boot/Image /boot/kernel8.img
