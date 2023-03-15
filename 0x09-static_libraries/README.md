#10x08-static_libraries

____________________


**Description**

*This project in the Low Level Programming series is about:*

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm


________________________


**Creating a static library libmy.a**

```bach
gcc -Wall -pedantic -Werror -Wextra -c *.c
```
to clarify these commands[^1]

[^1]: The **`gcc`** command is a C compiler used to compile and link C programs. Here is an explanation of each flag used in the command:

* **`-Wall`** Enables all warning messages.
* **`-pedantic`** Causes the compiler to enforce the standard C language in strict manner.
* **`-Werror`** Treats all warnings as errors, causing compilation to fail if any warnings are generated.
* **`-Wextra`** Enables some extra warning messages that are not included in -Wall.
* **`-c`** Specifies that the source files should be compiled and assembled, but not linked.

The **`*.c`** argument tells the compiler to compile all **`.c`** files in the current directory. This command is useful for compiling C source code into object files without linking them, which is a necessary step before creating a static or dynamic library or an executable program.
