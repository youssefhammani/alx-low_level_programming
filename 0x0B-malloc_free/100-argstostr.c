#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: If memory allocation fails, NULL.
 * Otherwise, a pointer to the concatenated string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, total_len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		total_len += len;
		len = 0;
	}

	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*str++ = av[i][j];
		*str++ = '\n';
	}

	*str = '\0';
	return (str - total_len);
}
