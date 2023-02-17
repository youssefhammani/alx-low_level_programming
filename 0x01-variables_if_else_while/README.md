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

________________________________________________


### 4. When I was having that alphabet soup, I never thought that it would pay off

*The program uses a **`for`** loop to iterate over the lowercase letters of the alphabet from 'a' to 'z'. Inside the loop, there is an **`if`** statement that checks whether the current letter is 'q' or 'e'. If it is, the program skips over that letter and continues to the next iteration of the loop. If it's not 'q' or 'e', the program prints the current letter using the **`putchar()`** function.*

*Finally, the program prints a newline character (**`\n`**) to move the output to a new line and returns 0 to indicate that the program has run successfully.*

_______________________________________________


### 5. Numbers

*This is a C program that declares an integer variable **`i`**, initializes it to **`-1`**, and then enters a **`while`** loop.*

*The loop executes the block of code within it repeatedly until the condition within the parentheses evaluates to false. The condition is **`++i < 10`**, which means that **`i`** is first incremented and then checked to see if it is less than **`10`**. The **`++i`** increments the value of **`i`** by **`1`** before evaluating the condition.*

*Within the loop, the **`printf`** function is called to print the value of **`i`**. This is repeated for each iteration of the loop, with the value of **`i`** increasing from **`-1`** to **`9`**.*

*After the loop has finished, a newline character is printed to move the output to a new line. Finally, the program returns **`0`** to indicate successful completion.*

________________________________________________________


### 7. Smile in the mirror

*This program uses a **`while`** loop to print the English alphabet in reverse order, starting from the letter 'z' and ending with the letter 'a'.*

*The program starts by declaring a character variable **`alph`** and initializing it with the value 'z'. The **`while`** loop then checks whether **`alph`** is greater than or equal to the character 'a'. As long as this condition is true, the loop executes its body, which consists of printing the character **`alph`** to the screen using the **`putchar`** function, and then decrementing **`alph`** by one.*

*Once alph is decremented down to 'a', the condition **`alph >= 'a'`** becomes false, and the loop terminates. Finally, the program prints a newline character to the screen using **`putchar`**, and returns 0 to indicate that it has run successfully.*

______________________________________________________

### 8. Hexadecimal

*This program is written in C and will output the characters from 0 to 9 and a to f.*

**Here's how the code works:**

1. *The first line **`int main(void)`** is the standard definition of a main function.*

2. ***`nb`** and **`alph`** are initialized as variables of type **`int`** and **`char`**, respectively.*

3. *The first for loop prints the numbers 0 through 9. The loop starts by assigning **`nb`** to the character '0', and it continues to run as long as **`nb`** is less than or equal to the character '9'. On each iteration of the loop, the character **`nb`** is printed using the **`putchar`** function.*

4. *The second for loop prints the lowercase letters a through f. The loop starts by assigning **`alph`** to the character 'a', and it continues to run as long as **`alph`** is less than or equal to the character 'f'. On each iteration of the loop, the character **`alph`** is printed using the **`putchar`** function.*

5. *After the loops, the **`putchar('\n')`** statement prints a newline character, which moves the output to the next line.*

6. ***`The return 0`** statement exits the main function with a success status.*

_________________________________________________________________


### 9. Patience, persistence and perspiration make an unbeatable combination for success

*This is a C program that prints the numbers 0 through 9 to the console, separated by commas and spaces, and then followed by a newline character.*

**Here's a step-by-step explanation of the code:**

1. ***`int main(void)`** - This declares the main function of the program. It returns an integer, and takes no arguments.*

2. *int nb; - This declares an integer variable called nb.*

3. *for (nb = '0'; nb <= '9'; nb++) - This is a for loop that initializes nb to the character '0', checks whether nb is less than or equal to '9', and increments nb by one after each iteration.*

4. *putchar(nb); - This prints the current value of nb to the console.*

5. *if (nb != '9') - This checks whether the current value of nb is not equal to the character '9'.*

6. *putchar(','); - This prints a comma to the console.*

7. *putchar(' '); - This prints a space to the console.*

8. *putchar('\n'); - This prints a newline character to the console.*

9. *return (0); - This exits the program with a return value of 0, indicating that the program has run successfully.*
