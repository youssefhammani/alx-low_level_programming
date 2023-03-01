#include "main.h"

/**
 * main - That program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2 .
 * Return: always 0 (Success)
 */


int main(void)
{
	unsigned long int i, a, b;

	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);

	for (i = 0; i < 98; i++)
	{
		b = a + b;
		a = b - a;

		printf("%lu", b);

		if (i < 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
