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

________________________________________


### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

*This program is a simple implementation of a loop in C that prints out the lowercase alphabet using the **`putchar`** function.*

*The program then defines the main function which is the entry point of the program. The main function returns an integer, and in this case, it always returns 0 to indicate successful execution.*

*Within the main function, a variable **`alph`** of type **`char`** is declared and initialized to the lowercase letter 'a'. The program then enters a loop which iterates until the value of **`alph`** is equal to the lowercase letter 'z'.*

*During each iteration of the loop, the **`putchar`** function is called to print the value of **`alph`** to the standard output stream (usually the console). After the loop completes, a newline character is printed to the console using another **`putchar`** function.*

*Overall, this program demonstrates the use of a loop and the **`putchar`** function to output the lowercase alphabet to the console.*

_______________________________________________


### 3. alphABET

**This C program outputs all the letters of the English alphabet in both lowercase and uppercase.**

*At the beginning of the program, it includes the header file stdio.h which provides input and output functions such as **`putchar()`**.*

*In the main function, a character variable **`alph`** is declared to store each letter of the alphabet. The first loop starts from the lowercase letter 'a' and continues until it reaches 'z'. Inside the loop, each letter is printed using the **`putchar()`** function.*

*After that, the program enters a second loop that does the same for the uppercase letters 'A' to 'Z'. Once all the letters have been printed, the program outputs a newline character with **`putchar('\n')`** and exits with a return value of 0.*
