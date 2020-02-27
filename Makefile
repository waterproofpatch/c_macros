SRC_DIR=src
BIN_DIR=bin
ARM_CC=arm-none-eabi-gcc
X86_CC=gcc

all: dirs x86 arm

x86:
	$(X86_CC) $(SRC_DIR)/main.c -o $(BIN_DIR)/x86/main

arm:
	$(ARM_CC) --specs=nosys.specs -mthumb -march=armv7 $(SRC_DIR)/main.c -o $(BIN_DIR)/arm/main

dirs:
	mkdir -p $(BIN_DIR)/arm
	mkdir -p $(BIN_DIR)/x86

clean:
	rm -rf $(BIN_DIR)

