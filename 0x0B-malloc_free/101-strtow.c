#include "main.h"

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */

int word_count(char *str)
{
	int count = 0, i;

	for (i = 0; str[i]; ++i)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			++count;
		}
	}

	return (count);
}

/**
 * is_empty - Checks if a string is empty.
 * @str: The string to check.
 *
 * Return: 1 if the string is empty, 0 otherwise.
 */

int is_empty(char *str)
{
	int i;

	for (i = 0; str[i]; ++i)
	{
		if (str[i] != ' ')
			break;
	}

	if (str[i] == '\0')
		return (1);
	return (0);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings,
 * or NULL if memory allocation fails.
 */

char **strtow(char *str)
{
	char **words;
	int wc, i, j, k;

	if (str == NULL || is_empty(str))
		return (NULL);

	wc = word_count(str);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < wc; ++i)
	{
		while (str[k] == ' ')
			++k;

		for (j = k; str[j] && str[j] != ' '; ++j)
			;

		words[i] = malloc(sizeof(char) * (j - k + 1));
		if (words[i] == NULL)
		{
			for (i = i - 1; i >= 0; --i)
			{
				free(words[i]);
			}
			free(words);

			return (NULL);
		}

		for (j = 0; str[k] && str[k] != ' '; ++j, ++k)
			words[i][j] = str[k];
		words[i][j] = '\0';
	}
	words[i] = NULL;

	return (words);
}
