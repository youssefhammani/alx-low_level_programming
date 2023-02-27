#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s++)
		len++;
	return (len);
}
