#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb_1, nb_2;	
	
	for (nb_1 = 0; nb_1 <= 8; nb_1++)
	{
		for (nb_2 = nb_1 + 1; nb_2 <= 9; nb_2++)
		{
			putchar(nb_1 + '0');
			putchar(nb_2 + '0');
			
			if (nb_1 != 8 || nb_2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	
	return (0);
}
