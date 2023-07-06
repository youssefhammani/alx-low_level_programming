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
	int val;

	if (index > 63)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}
