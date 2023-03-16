#include "main.h"

/**
 * array_range - creates an array of integers with values from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: If min > max or memory allocation fails, return NULL.
 * Otherwise, return a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
