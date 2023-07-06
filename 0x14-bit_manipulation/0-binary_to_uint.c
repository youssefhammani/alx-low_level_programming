#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 *         - There is one or more chars in the string @b that is not 0 or 1.
 *         - The string @b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val;
	int i;

	val = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}
	return (val);
}
