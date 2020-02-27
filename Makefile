SRC_DIR=src
BIN_DIR=bin

all: dirs
	gcc $(SRC_DIR)/main.c -o $(BIN_DIR)/main

dirs:
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(BIN_DIR)

