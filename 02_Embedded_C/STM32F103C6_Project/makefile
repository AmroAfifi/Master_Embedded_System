#@copyright: Amr Afifi
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb -gdwarf-2
INCS=-I .
LIBS=
#app.o uart.o
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
#startup.o 
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
projec_tname=learn_in_depth_cortex_m3

all: $(projec_tname).bin
	@echo "========== Done =========="
	
startup.o: startup.s	
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(projec_tname).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe  -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=map_file.map

$(projec_tname).bin: $(projec_tname).elf
	$(CC)objcopy.exe -O binary $< $@
	

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin