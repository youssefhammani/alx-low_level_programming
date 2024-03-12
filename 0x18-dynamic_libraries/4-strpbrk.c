#include "main.h"

/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, accept_chars[256] = {0};

	for (i = 0; accept[i]; i++)
		accept_chars[(int) accept[i]] = 1;
	for (i = 0; s[i]; i++)
		if (accept_chars[(int) s[i]] == 1)
			return (s + i);
	return (NULL);
}
