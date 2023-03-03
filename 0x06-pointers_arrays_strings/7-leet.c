#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String of variable pointer
 * Return: String that is encoded
 */

char *leet(char *s)
{
	int i, j;

	char letters[] = "aeotl";
	char numbers[] = "43701";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
