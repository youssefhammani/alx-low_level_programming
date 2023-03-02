#include "main.h"

/**
 *_strncat - concatenates two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at the end of dest
 *@n : integer parameter to compare index to
 *Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (*src && n--)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
