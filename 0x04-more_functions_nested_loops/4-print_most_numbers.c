#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */

void print_most_numbers(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
		if (nb != 2 && nb != 4)
		{
			_putchar(nb + '0');
		}
	}
	_putchar('\n');
}
