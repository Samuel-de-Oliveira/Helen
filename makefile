# Makefile to who use Sudar's Arduino Makefile
# Check https://github.com/Sudar/Arduino-Makefile for more info.

ARDMK_VENDOR   = arduino
ARDUINO_DIR    = /usr/share/arduino/
ARDMK_DIR      = /usr/share/arduino/
ARDUINO_PORT   = /dev/ttyACM0
MONITOR_PORT   = /dev/ttyACM0
USER_LIB_PATH  = /home/$(USER)/Arduino/libraries
BOARD_TAG      = uno
BOARD_SUB      = atmega328

include /usr/share/arduino/Arduino.mk
