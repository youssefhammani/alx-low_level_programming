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

	printf("%ld, %ld, ", a, b);

	for (i = 2; i <= 98; i++)
	{
		b = a + b;
		a = b - a;

		printf("%ld", b);

		if (i < 98)
			printf(", ");
	}
	printf("\n");

	return (0);
}
