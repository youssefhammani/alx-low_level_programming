#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string whose length is to be calculated
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
