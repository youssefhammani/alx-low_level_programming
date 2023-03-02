#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the string to be modified.
 *
 * Return: the modified string.
 */

char *string_toupper(char *str)
{
	char *start = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}

	return (start);
}
