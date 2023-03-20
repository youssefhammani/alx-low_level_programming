#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if they can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare (can contain the special character *)
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
