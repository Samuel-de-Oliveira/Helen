# Makefile arduino-cli
BOARD = /dev/ttyACM0
CORE  = arduino:avr:uno

all:
	sudo chmod 777 $(BOARD)
	arduino-cli compile --fqbn $(CORE) .
	arduino-cli upload -p $(BOARD) --fqbn $(CORE) .
