# Captain's Log, stardate 2023-03-24.

Today I worked on a programming project involving variadic functions in C. The project aims to teach the use of variadic functions, specifically the va_start, va_arg, and va_end macros, and the const type qualifier.

**The project consists of two mandatory tasks:**

1. Writing a function that returns the sum of all its parameters.
2. Writing a function that prints numbers, followed by a new line.

I started by researching variadic functions, studying the resources provided in the project, and reading documentation on **`va_start`**, **`va_arg`**, and **`va_end`** macros. I also reviewed the Betty style and created a header file with prototypes for the functions.

For the first task, I wrote a function called **`sum_them_all`** that takes an unsigned integer n and any number of additional integer arguments. The function returns the sum of all the integer arguments passed to it. If **`n`** is 0, the function returns 0.

For the second task, I wrote a function called **`print_numbers`** that takes a string **`separator`**, an unsigned integer **`n`**, and any number of additional integer arguments. The function prints each integer argument, **`separated`** by the **`separator`** string. If separator is NULL, it is not printed. The function also prints a new line at the end.

I compiled and tested both functions with main files provided in the project and they worked as expected. I will continue working on the remaining tasks and prepare for the auto QA review that will be launched at the deadline.

# End log.
