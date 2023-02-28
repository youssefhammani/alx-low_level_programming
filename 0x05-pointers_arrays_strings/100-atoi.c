#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign, result;

	sign = 0;
	result 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result != 0)
			break;
		s++;
	}
	return (result * sign);
}
