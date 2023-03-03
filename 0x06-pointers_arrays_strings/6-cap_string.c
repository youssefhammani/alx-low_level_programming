#include "main.h"

/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
					|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
					|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
					|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
					|| s[i - 1] == '}')
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
