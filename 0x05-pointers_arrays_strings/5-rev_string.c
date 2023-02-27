#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i, j, len;
	char temp;

	while (s[len])
		len++;

	j = len -1;

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
