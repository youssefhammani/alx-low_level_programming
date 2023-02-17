# ***Learning Objectives for C Programming: Operators, Conditional Statements, and Variables***



### 0. Positive anything is better than negative nothing

*This is a C program that includes the standard libraries **`stdlib.h`**, **`time.h`**, and **`stdio.h`**. The program contains a **`main`** function that generates a random integer using the **`rand()`** function from **`stdlib.h`** and the current time as a seed provided by the **`time()`** function from **`time.h`**. The integer is stored in the variable `n`.*

```c
    The number, followed by
        if the number is greater than 0: is positive
        if the number is 0: is zero
        if the number is less than 0: is negative
    followed by a new line
```

*The program then checks the value of **`n`** using an if-else statement. If **`n`** is greater than 0, it prints out that the number is positive. If **`n`** is less than 0, it prints out that the number is negative. If **`n`** is equal to 0, it prints out that the number is "zwro", which is a typo for "zero".*

*The purpose of this program is to demonstrate the use of the **`rand()`** and **`time()`** functions from the standard libraries to generate random numbers and to illustrate the use of if-else statements to control program flow based on the value of a variable. The program can be modified to perform other tasks based on the value of **`n`** or to generate multiple random numbers.*

_______________________________________


### 1. The last digit

*This is a C program that generates a random number, assigns it to the variable **`n`**, and then prints a message indicating whether the last digit of **`n`** is greater than 5, less than 6 and not 0, or equal to 0.*
