VERSION = CZLE
ADDRESS = 0x80600000
MAINXRAM = 0x800005A0
MAINXROM = 0x000011A0
HOOK = 0x00B17F30
CODE1BIN = 0xDEADBEEF
CODE1REQ = 0x00007420

CC   = @mips64-gcc
LD   = mips64-ld
OBJCOPY = mips64-objcopy
OBJDUMP = mips64-objdump

CFLAGS = -Iinclude -G 0 -Os 						\
--std=gnu99 -mtune=vr4300 -mabi=32 -mips3 			\
-mno-explicit-relocs -mno-memcpy -ffreestanding		\
-Wno-main -mno-gpopt -Wno-unused-function 			\
-fomit-frame-pointer -mno-check-zero-division		\
-D$(VERSION)
LDFLAGS = --emit-relocs -T										
LDFLAGS = -L$(Z64OVL_LD) -T z64ovl.ld --emit-relocs

default: clean code1.bin mainx patches

code1.bin:
	@echo -n "ENTRY_POINT = " > entry.ld
	@echo -n $(ADDRESS) >> entry.ld
	@echo -n ";" >> entry.ld
	@$(CC) -c code1.c $(CFLAGS)
	@$(LD) -o code1.elf code1.o $(LDFLAGS) $(LDFILE)
	@$(OBJCOPY) -R .MIPS.abiflags -O binary code1.elf code1.bin
	@echo -n "0x" > hex.txt
	@$(OBJDUMP) -t code1.elf | grep code1_main | cut -c1-8 >> hex.txt
	@cat entry.ld | grep -o "8......." > req.txt
	@cp code1.bin ../code1.bin
	@echo "Generated ../code1.bin"

mainx:
	@echo -n "ENTRY_POINT = " > entry.ld
	@echo -n $(MAINXRAM) >> entry.ld
	@echo -n ";" >> entry.ld
	@$(CC) -c mainx.c $(CFLAGS)
	@$(LD) -o mainx.elf mainx.o $(LDFLAGS) $(LDFILE)
	@$(OBJCOPY) -R .MIPS.abiflags -O binary mainx.elf mainx.bin
	@cp mainx.bin ../mainx.bin
	@echo "Generated ../mainx.bin"

patches:
	@./make_patches.sh $(HOOK) $(MAINXROM) $(CODE1REQ) $(CODE1BIN)
	@echo "Generated ../hook-cloudpatch.txt"
	@echo "Generated ../mainx-cloudpatch.txt"
	@echo "Generated ../code1-cloudpatch.txt"

clean:
	@rm -f *.bin *.elf *.o