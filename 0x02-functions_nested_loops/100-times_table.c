#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", result = i * j);

			if (j != n)
			{
				if (result < 10)
					printf(",   ");
				if (result > 9 && result < 100)
					printf(",  ");
				if (result > 99)
					printf(", ");

			}
		}
		printf("\n");
	}
}
