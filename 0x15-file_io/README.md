# C - File I/O

This project focuses on file input/output (I/O) operations in C programming. It covers concepts such as file descriptors, system calls, and various I/O functions. The main objective is to learn how to create, open, close, read, and write files using the standard file descriptors.


**Learning Objectives**

By the end of this project, you should be able to:


* Seek the right source of information online
* Perform file I/O operations including creating, opening, closing, reading, and writing files
* Understand file descriptors and their significance
* Identify the three standard file descriptors and their POSIX names
* Utilize the open, close, read, and write system calls effectively
* Work with flags such as O_RDONLY, O_WRONLY, and O_RDWR
* Set file permissions when creating files using the open system call
* Differentiate between a function and a system call

**Requirements**

* Allowed editors: vi, vim, emacs
* Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
* All files should end with a new line
* Your code should follow the Betty style guide
* No more than 5 functions per file
* Allowed C standard library functions: malloc, free, and exit
* Allowed system calls: read, write, open, close
* The prototypes of all functions and the _putchar function should be included in the main.h header file
* Do not include the _putchar.c file in your repository
* Use symbolic constants (POSIX) instead of numbers whenever possible
* Quiz questions will be provided throughout the project to reinforce your learning

## Tasks

### Task 0: Tread lightly, she is near

Write a function read_textfile that reads a text file and prints its content to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters);

* filename: The name of the file to read
* letters: The number of letters to read and print
* Returns: The actual number of letters read and printed; 0 if the file cannot be opened or read, or if filename is NULL
* If the write system call fails or does not write the expected amount of bytes, return 0

Example:

```vbnet
$ cat Requiescat
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
$ ./a Requiescat
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.
(printed chars: 114)
Requiescat
by Oscar Wilde

Tread lightly, she is near
Under the snow,
Speak gently, she can hear
The daisies grow.

All her bright golden hair
Tarnished with rust,
She that was young and fair
Fallen to dust.

Lily-like, white as snow,
She hardly knew
She was a woman, so
Sweetly she grew.

Coffin-board, heavy stone,
Lie on her breast,
I vex my heart alone,
She is at rest.

Peace, Peace, she cannot hear
Lyre or sonnet,
All my life's buried here,
Heap earth upon it.

(printed chars: 468)

```

### Task 1: Under the snow

