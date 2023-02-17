#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb;

	nb = '0';

	while (nb++ <= '9')
	{
		putchar(nb);
	}
	putchar('\n');

	return (0);
}
