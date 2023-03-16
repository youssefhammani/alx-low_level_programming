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

	while (*(s + len))
		len++;
	return (len);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * string_nconcat - concatenates two strings up to a specified length
 * @s1: pointer to the first string to concatenate
 * @s2: pointer to the second string to concatenate
 * @n: maximum number of characters to concatenate from s2
 * Return: pointer to the concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *result;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(sizof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);

	_memcpy(result, s1, len1);
	_memcpy(result + len1, s2, n);

	result[len1 + n] = '\0';

	return (result);


}
