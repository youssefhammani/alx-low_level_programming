#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: input number
 * @index: index of the bit
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	result = (n >> index) & 1;
	return (result);
}
