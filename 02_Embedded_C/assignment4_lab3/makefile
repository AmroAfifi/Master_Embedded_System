#@copyright: Amr Afifi
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS=
#app.o uart.o
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
#startup.o 
#AS= $(wildcard *.s)
#ASOBJ= $(AS:.s=.o)
projec_tname=lab4_cortex_m4

all: $(projec_tname).bin
	@echo "========== Done =========="
	
#startup.o: startup.s	
#	$(CC)as.exe $(CFLAGS) $< -o $@
# in case of startup.c 
%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(projec_tname).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe  -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@ -Map=map_file.map
	cp $(projec_tname).elf $(projec_tname).axf

$(projec_tname).bin: $(projec_tname).elf
	$(CC)objcopy.exe -O binary $< $@
	

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin