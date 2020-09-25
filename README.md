# C Macros

Some useful C macros.

## Prerequisites

- arm-none-eabi-gcc

```bash
brew tap ArmMbed/homebrew-formulae
brew install arm-none-eabi-gcc`
```

## Docs

```bash
make docs
open html/index.html
```

## Build

```bash
make
```

## Run

```bash
./bin/x86/main
src/main.c:36: [DEBUG] A debug message
src/main.c:37: [ERROR] An error message
src/main.c:38: [INFO] An info message
[1]    2273 trace trap  ./bin/x86/main
```
