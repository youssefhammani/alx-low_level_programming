#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string whose length is to be calculated
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_is_palindrome - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_is_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_is_palindrome(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_is_palindrome(s, 0, _strlen_recursion(s)));
}
