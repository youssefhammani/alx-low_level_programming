#include "main.h"

/**
 * reverse_string - Reverses a string
 * @str: The string to reverse
 *
 * Return: A pointer to the reversed string
 */

char *reverse_string(char *str)
{
	int len = 0;
	int i;
	char temp;

	while (str[len])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	return (str);
}

/**
 * add_single_digit - Adds two single-digit numbers and returns the carry
 * @n1: The first number
 * @n2: The second number
 * @result: Pointer to where the result will be stored
 *
 * Return: The carry
 */

int add_single_digit(char n1, char n2, char *result)
{
	int sum = (n1 - '0') + (n2 - '0');
	int carry = 0;

	if (sum >= 10)
	{
		carry = 1;
		sum -= 10;
	}

	*result = sum + '0';
	return (carry);
}

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: Pointer to where the result will be stored
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int i, j, carry = 0;

	while (n1[len1])
		len1++;

	while (n2[len2])
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	for (i = 0, j = 0; i < len1 || i < len2 || carry; i++, j++)
	{
		if (j >= size_r)
			return (0);

		carry += i < len1 ? n1[len1 - i - 1] - '0' : 0;
		carry += i < len2 ? n2[len2 - i - 1] - '0' : 0;
		carry = add_single_digit(carry + '0', '0', &r[j]);

		if (carry == 1 && j == size_r - 1)
			return (0);
	}

	r[j] = '\0';

	return (reverse_string(r));
}
