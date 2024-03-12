# Dynamic Libraries

This repository contains solutions to tasks related to dynamic libraries in the ALX Software Engineering program.

## Description of Contents

### 0. A library is not a luxury but one of the necessities of life

This task involves creating a dynamic library named `libdynamic.so` containing various C functions such as `_putchar`, `_islower`, `_isalpha`, etc. These functions are defined in `main.h` header file.

### 1. Without libraries what have we? We have no past and no future

In this task, a script named `1-create_dynamic_lib.sh` is created to compile all `.c` files in the current directory into a dynamic library named `liball.so`.

### 2. Let's call C functions from Python (Advanced)

A dynamic library named `100-operations.so` is created, containing C functions that can be called from Python. The `100-tests.py` Python script demonstrates calling these functions.

### 3. Code injection: Win the Giga Millions! (Advanced)

This task involves exploiting the `LD_PRELOAD` environment variable to inject custom code into the Giga Millions program, allowing the player to win the jackpot.

## Files

* `libdynamic.so`: Dynamic library created for task 0.
* `main.h`: Header file containing prototypes of functions for task 0.
* `1-create_dynamic_lib.sh`: Script for task 1.
* `100-operations.so`: Dynamic library created for task 2.
* `100-tests.py`: Python script to test calling C functions from the library created in task 2.
* `101-make_me_win.sh`: Shell script for task 3.

## Usage

To use the dynamic libraries and scripts:

1. Compile and execute programs requiring the libraries created in tasks 0, 2, and 3.
2. Run the scripts `1-create_dynamic_lib.sh` and `101-make_me_win.sh` as required.

Ensure permissions are set correctly to execute the scripts.

## Author

This repository was created by [ALX](https://www.alxafrica.com/), a software engineering program.
