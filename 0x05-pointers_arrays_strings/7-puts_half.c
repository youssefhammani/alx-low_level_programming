#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	while (str[len])
		len++;

	n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
