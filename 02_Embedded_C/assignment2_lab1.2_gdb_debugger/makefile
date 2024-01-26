#@copyright: Amr Afifi
CC=arm-none-eabi-
CFLAGS=-g -mcpu=arm926ej-s
INCS=-I .
LIBS=
#app.o uart.o
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
#startup.o 
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
projec_tname=learn_in_depth

all: $(projec_tname).bin
	@echo "========== Done =========="
	
startup.o: startup.s	
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(projec_tname).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe  -T linker_script.ld $(LIBS) $(OBJ) $(ASOBJ) -o $@

$(projec_tname).bin: $(projec_tname).elf
	$(CC)objcopy.exe -O binary $< $@
	

clean_all:
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin