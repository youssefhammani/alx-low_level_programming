# 10x08-static_libraries

____________________


**Description**

*This project in the Low Level Programming series is about:*

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm


________________________


## Creating a static library libmy.a

```bach
gcc -Wall -pedantic -Werror -Wextra -c *.c
```

The **`gcc`** command is a C compiler used to compile and link C programs. Here is an explanation of each flag used in the command:

* **`-Wall`** Enables all warning messages.
* **`-pedantic`** Causes the compiler to enforce the standard C language in strict manner.
* **`-Werror`** Treats all warnings as errors, causing compilation to fail if any warnings are generated.
* **`-Wextra`** Enables some extra warning messages that are not included in -Wall.
* **`-c`** Specifies that the source files should be compiled and assembled, but not linked.

The **`*.c`** argument tells the compiler to compile all **`.c`** files in the current directory. This command is useful for compiling C source code into object files without linking them, which is a necessary step before creating a static or dynamic library or an executable program.


____________________________________


```bach
ar -rc libmy.a *.o
```

The command **`ar -rc libmy.a *.o`** creates a static library file named **`libmy.a`** from a set of object files that match the pattern **`*.o.`** Here's what each flag does:

* **`ar`** the archive command that creates or modifies static library files
* **`-rc`** the options for **`ar`** that indicate that a new archive file should be created **`(r)`**, and that object files should be inserted into the archive **`(c)`** if they are not already present
* **`libmy.a**` the name of the new static library file to be created
* **`*.o** the pattern that matches all object files in the current directory and adds them to the library file

So this command creates a new static library file **`libmy.a`** and inserts all object files in the current directory that match the pattern *.o into it. Once the library file is created, you can link it with other programs using the -l flag to reference the library.


________________________________

```bach
ar -t libmy.a
```

0-isupper.o
0-memset.o
0-strcat.o
1-isdigit.o
1-memcpy.o
1-strncat.o
100-atoi.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o6-abs.o
6-abs.o
9-strcpy.o
\_putchar.o


The command **`ar -t libmy.a`** is used to list the contents of the static library **`libmy.a`**. The output of this command will display the names of all the object files that are contained within the library. The **`ar`** command is a utility for creating, modifying, and extracting archives, and **`t`** is the option to list the files in the archive.

In this case, the **`libmy.a`** library is created from several object files **`(*.o)`** and the **`ar -t libmy.a`** command is used to verify that all the object files have been included in the library. The output of this command will list all the object files included in the library along with their names.


________________________________


```bash
ranlib libmy.a
```

**`ranlib`** is a Unix command that generates an index for the contents of an archive file **`(.a)`**. The index is a table of contents that lists the files contained within the archive and their associated symbols.

When an archive is created with the ar command, it does not have an index by default. This means that if you want to access the files or symbols within the archive, you would need to search through the entire archive, which can be a time-consuming operation.

When an archive is created with the **`ar`** command, it does not have an index by default. This means that if you want to access the files or symbols within the archive, you would need to search through the entire archive, which can be a time-consuming operation.

By running **`ranlib`** on the archive, an index is created that allows for faster access to the contents of the archive. This is especially useful when working with large archives or when there are many files and symbols within an archive.

The **`ranlib`** command is used to update the index of an archive file. When you run **`ranlib`** on an archive file, it adds or updates the index of the archive file. The updated index is then used by tools like **`nm`** and **`ar`** to list the contents of the archive file or extract specific files from the archive.

____________________________________________


```bash
nm libmy.a
```

The **`nm`** command is a Unix utility that is used to display the symbols present in an object file or an executable file. When used with the **`libmy.a`** library file, it displays a list of symbols present in the library along with their type and memory address.

Here is an example output of **`nm libmy.a`**:

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset

0-strcat.o:
0000000000000000 T _strcat

1-isdigit.o:
0000000000000000 T _isdigit

1-memcpy.o:
0000000000000000 T _memcpy

1-strncat.o:
0000000000000000 T _strncat

100-atoi.o:
0000000000000000 T _atoi

2-strchr.o:
0000000000000000 T _strchr

2-strlen.o:
0000000000000000 T _strlen

2-strncpy.o:
0000000000000000 T _strncpy

3-islower.o:
0000000000000000 T _islower

3-puts.o:
                 U _putchar
0000000000000000 T _puts

3-strcmp.o:
0000000000000000 T _strcmp

3-strspn.o:
0000000000000000 T _strspn

4-isalpha.o:
0000000000000000 T _isalpha

4-strpbrk.o:
0000000000000000 T _strpbrk

5-strstr.o:
0000000000000000 T _strstr

6-abs.o:
0000000000000000 T _abs

9-strcpy.o:
0000000000000000 T _strcpy

_putchar.o:
0000000000000000 T _putchar
                 U write


Here, each row represents a symbol found in the library, with the format **`[filename.o]: [memory address] [symbol type] [symbol name]`**. The **`T`** symbol type indicates that the symbol is in the text (code) section of the object file, while the **`U`** symbol type indicates that the symbol is undefined (i.e. not defined in the current object file or library).

In this particular example, the library contains various C functions like **`_puts, _strcmp, _strlen`**, and others.

_________________________________________


> You must create a main.c file before using this command

```c
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
```

```bash
gcc -std=gnu89 main.c -L. -lmy -o quote
```

This command compiles the source code file **`main.c`** and creates an executable file named **`quote`**.

**Here is what each option does:**

* **`-std=gnu89`** specifies the version of the C standard to use. In this case, it's using the GNU C89 dialect.

* **`-L.`**  tells the linker to search for libraries in the current directory.

* **`-lmy`** tells the linker to link against the library `libmy.a`.

* **`-o quote`** specifies the name of the output file.


So in summary, the command compiles **`main.c`**, links it against the **`libmy.a`** library, and creates an executable file named **`quote`**.


_________________________________________


## Files

| File | Task |
|------|------|
| main.h | header file with all function prototypes in this directory |
| create_static_lib.sh | creates a static library called liball.a from all the .c files |
| libmy.a | static library created including all function prototypes in main.h file |


_______________________________


**Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.**

```#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
```

**`#!/bin/bash`** is called the "shebang" line and it tells the shell which interpreter to use to execute the script. In this case, it specifies that the script should be run using the Bash shell.

**`gcc`** is a compiler for the C programming language. The options **`-Wall`**, **`-pedantic`**, **`-Werror`**, and **`-Wextra`** enable additional warnings and error checking during compilation, which can help catch programming mistakes. The option **`-c`** tells gcc to compile each **`.c`** file into a separate object file **`(.o)`**, rather than producing an executable file.


**`ar`** is a utility for creating and manipulating static libraries on Unix-like systems. The options **`rcs`** tell **`ar`** to create a new archive (if it doesn't already exist), replace any existing contents, and create an index (so that it can be linked efficiently). The argument **`liball.a`** specifies the name of the library to create. The argument **`*.o`** specifies the object files to include in the library, which in this case are all the **`.o`** files in the current directory.

In summary, this script compiles each **`.c`** file in the current directory into a separate object file, and then creates a static library named **`liball.a`** containing all the object files.
