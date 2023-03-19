#include "main.h"

/**
 * is_prime_helper - checks if a number is prime (helper function)
 * @n: the number to check
 * @i: the current divisor to try
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	else
		return (is_prime_helper(n, i + 6));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (is_prime_helper(n, 5));
}
