#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed.
 *
 * Return: void
 */

void print_number(int n)
{
	int digit, divisor = 1;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor > 9)
		divisor *= 10;
	
	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
