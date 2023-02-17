# ***Learning Objectives for C Programming: Operators, Conditional Statements, and Variables***



### 0. Positive anything is better than negative nothing

*This is a C program that includes the standard libraries **`stdlib.h`**, **`time.h`**, and **`stdio.h`**. The program contains a **`main`** function that generates a random integer using the **`rand()`** function from **`stdlib.h`** and the current time as a seed provided by the **`time()`** function from **`time.h`**. The integer is stored in the variable `n`.*

```c
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zwro\n", n);

	return (0);
}
```

*The program then checks the value of **`n`** using an if-else statement. If **`n`** is greater than 0, it prints out that the number is positive. If **`n`** is less than 0, it prints out that the number is negative. If **`n`** is equal to 0, it prints out that the number is "zwro", which is a typo for "zero".*

*The purpose of this program is to demonstrate the use of the **`rand()`** and **`time()`** functions from the standard libraries to generate random numbers and to illustrate the use of if-else statements to control program flow based on the value of a variable. The program can be modified to perform other tasks based on the value of **`n`** or to generate multiple random numbers.*
