#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb_1, nb_2;

	for (nb_1 = 0; nb_1 <= 7; nb_1++)
	{
		for (nb_2 = nb_1 + 1; nb_2 <= 8; nb_2++)
		{
			for(nb_3 = nb_2 + 1; nb_3 <= 9; nb_3++)
			{
				putchar(nb_1 + '0');
				putchar(nb_2 + '0');
				putchar(nb_3 + '0');

				if (nb_1 != 7 || nb_2 != 8 || nb_3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
