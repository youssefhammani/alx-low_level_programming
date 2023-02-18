#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nb_1, nb_2;

	for (nb_1 = 0; nb_1 < 100; nb_1++)
	{
		for (nb_2 = nb_1 + 1; nb_2 < 100; nb_2++)
		{
			putchar((nb_1 / 10) + '0');
			putchar((nb_1 % 10) + '0');
			putchar(' ');
			putchar((nb_2 / 10) + '0');
			putchar((nb_2 % 10) + '0');
			if (nb_1 != 98 || nb_2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
