#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char pwd[PWD_LEN + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PWD_LEN; i++)
	{
		int r = rand() % 62;

		if (r < 26)
			pwd[i] = 'A' + r;
		else if (r < 52)
			pwd[i] = 'a' + r - 26;
		else
			pwd[i] = '0' + r - 52;
	}

	pwd[PWD_LEN] = '\0';

	printf("Tada! Congrats");

	return (0);
}
