#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed.
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int digit, nb = n, divisor = 1;

	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
	}

	while (nb / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = nb / divisor;
		_putchar(digit + '0');
		nb %= divisor;
		divisor /= 10;
	}
}
