#include "main.h"

/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */

char *rot13(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i]; i++)
	{
		c = str[i];

		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c = c + 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z')) 
			c = c = - 13;
		str[i] = c;
	}
}
