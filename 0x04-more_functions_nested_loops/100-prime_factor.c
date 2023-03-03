#include "main.h"

/**
 *main - prints largest factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143, largest_prime = 2;

	while (n > largest_prime)
	{
		if (n % largest_prime == 0)
			n /= largest_prime;
		else
			largest_prime++;
	}
	printf("%ld\n", largest_prime);

	return (0);
}
