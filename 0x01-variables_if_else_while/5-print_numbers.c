#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = -1;

	while (++i < 10)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
