#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (is_palindrome_helper(s, len));
}

/**
 * is_palindrome_helper - helper function for is_palindrome
 * @s: the string to check
 * @len: the length of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (s[0] == s[len - 1])
		return (is_palindrome_helper(s + 1, len - 2));
	else
		return (0);
}
