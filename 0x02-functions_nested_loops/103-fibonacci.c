#include "main.h"

/**
 * main - That program prints the sum of the valued terms.
 * do not exceed 4,000,000 .
 * Return: always 0 (Success)
 */

int main(void)
{
	int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;

		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);

	return (0);
}
