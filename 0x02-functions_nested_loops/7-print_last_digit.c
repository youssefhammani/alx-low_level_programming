#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int nld)
{
	int nb;

	nb = nld % 10;

	if (nb < 0)
	{
		nb = (-1 * nb);
	}
	_putchar(nb + '0');

	return (nb);
}
