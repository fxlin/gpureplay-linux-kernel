# update: use vbindiff


# https://superuser.com/questions/125376/how-do-i-compare-binary-files-in-linux
vimdiff <(xxd /tmp/bo-bin-0001-0x00000120.bin) <(xxd //tmp/bo-bin-0002-0x00000120.bin)
# or 
colordiff -y <(xxd /tmp/bo-bin-0001-0x00000120.bin) <(xxd //tmp/bo-bin-0002-0x00000120.bin)

