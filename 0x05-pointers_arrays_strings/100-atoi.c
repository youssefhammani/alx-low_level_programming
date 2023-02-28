#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign, result, max_result, max_digit;

	sign = 1;
	result = 0;
	max_result = INT_MAX / 10;
	max_digit = INT_MAX % 10;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (result > max_result || (result == max_result && (*s - '0') > max_digit))
			{
				return sign == 1 ? INT_MAX : INT_MIN;
			}
			result = result * 10 + (*s - '0');
		}
		else if (result != 0)
			break;
		s++;
	}
	return (result * sign);
}
