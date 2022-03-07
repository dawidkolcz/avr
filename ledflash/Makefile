help:
	@echo "make hex - to compile to inte hex format."
	@echo "make flash - to flash to MC, defaults to stk500v1. I've used arduino."
hex:
	avr-gcc -g -Os -DF_CPU=8000000 -mmcu=attiny13a -c ledflash.c
	avr-gcc -g -DF_CPU=8000000 -mmcu=attiny13a -o ledflash.elf ledflash.o
	avr-objcopy -O ihex ledflash.elf ledflash.hex
flash: 
	avrdude -p t13 -c stk500v1 -P /dev/ttyACM0 -b19200 -U flash:w:ledflash.hex:i
