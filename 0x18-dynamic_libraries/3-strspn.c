#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, accept_chars[256] = {0};

	for (i = 0; accept[i]; i++)
		accept_chars[(int) accept[i]] = 1;

	for (i = 0; s[i] != '\0' && accept_chars[(int) s[i]] == 1; i++)
		count++;

	return (count);
}
