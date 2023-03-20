#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	if (len < 2)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	s[len - 1] = '\0';

	return (is_palindrome(&s[1]));
}
