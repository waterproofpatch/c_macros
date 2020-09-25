# Directories
SRC_DIR=src
BIN_DIR=bin
DOCS_DIRS=html latex

# Toolchains
X86_CC=gcc
ARM_CC=arm-none-eabi-gcc

# Flags
X86_FLAGS=-Wall
ARM_FLAGS=-Wall --specs=nosys.specs -mthumb -march=armv7

all: dirs x86 arm 

x86:
	$(X86_CC) $(X86_FLAGS) $(SRC_DIR)/main.c -o $(BIN_DIR)/x86/main

arm:
	$(ARM_CC) $(ARM_FLAGS)  $(SRC_DIR)/main.c -o $(BIN_DIR)/arm/main

dirs:
	mkdir -p $(BIN_DIR)/arm
	mkdir -p $(BIN_DIR)/x86

docs:
	doxygen

clean:
	rm -rf $(BIN_DIR)
	rm -rf $(DOCS_DIRS)

