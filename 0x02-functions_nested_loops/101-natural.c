#include "main.h"

/**
 * main - compute and prints the sum of all the multiples
 * of 3 or 5 below
 * Return: always 0 (Success)
 */

int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
