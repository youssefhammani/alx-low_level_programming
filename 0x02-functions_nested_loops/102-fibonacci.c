#include "main.h"

/**
 * main - That program prints the first 50 Fibonacci numbers,
 * starting with 1 and 2 .
 * Return: always 0 (Success)
 */


int main(void)
{
	unsigned int long i, a, b, c;

	a = 1;
	b = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%lu", a);

		if (i < 49)
			printf(", ");

		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
