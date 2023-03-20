#include "main.h"

/**
 *main - prints largest factor.
 * Return: Always 0.
 */

int main(void)
{
	long int i, n = 612852475143;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}

	if (n > 2)
		printf("%ld\n", n);
	else
		printf("%ld\n", i - 2);
	return (0);
}
