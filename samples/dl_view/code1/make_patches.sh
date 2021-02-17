code1_main=$(cat hex.txt)
code1_main=$(($code1_main >> 2))
code1_main=$(($code1_main & 0x3FFFFFF))
code1_main=$((0x0C000000 | $code1_main))
printf "$1,%08X%08X27BD014003E00008\n" $code1_main 0 > hook.txt
rm hex.txt
mv hook.txt ../hook-cloudpatch.txt

hexdump -v -n 156 -e '"" 1/1 "%02X" ""' mainx.bin >> hex.txt
printf "$2,%s\n" $(cat hex.txt) > mainx.txt
rm hex.txt
mv mainx.txt ../mainx-cloudpatch.txt

printf "$3,%08X%s%08X\n" $4 $(cat req.txt) $(wc -c code1.bin | awk '{print $1}') > code1.txt
hexdump -v -e '"" 1/1 "%02X" ""' code1.bin >> hex.txt
printf "$4,%s\n" $(cat hex.txt) >> code1.txt
rm hex.txt
rm req.txt
mv code1.txt ../code1-cloudpatch.txt

rm -f *.bin *.elf *.o *.bin