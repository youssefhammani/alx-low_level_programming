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
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: The string to copy.
 *
 * Return: A pointer to the duplicated string on success, or NULL on failure.
 */

char *_strdup(char *str)
{
	int i = -1, len;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	new_str = malloc(len);

	if (new_str == NULL)
		return (NULL);

	while (++i < len)
		new_str[i] = str[i];
	new_str[i] = '\0';

	return (new_str);
}
