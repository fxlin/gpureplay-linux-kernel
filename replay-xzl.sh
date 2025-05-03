# must exec with sudo
FILE=/sys/kernel/debug/dri/0/replay

if test -f "$FILE"; then
    echo "using $FILE"
else
    FILE=/sys/kernel/debug/dri/1/replay
fi

# binary
#cp /data/rpi4-workspace/trace/py-videocore6/bo_csd_0003_0x00000020.bin  /tmp/
#cp /data/rpi4-workspace/trace/computeheadless-1/*.bin  /tmp/

cat $FILE 
dmesg | tail -n10
dmesg| tail -n 500 > /tmp/dmesg.txt
