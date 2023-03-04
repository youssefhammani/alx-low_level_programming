#include "main.h"

/**
 * print_hex_offset - Prints the hexadecimal offset of a line
 *
 * @offset: The offset to print
 */

void print_hex_offset(unsigned int offset)
{
	printf("%08x: ", offset);
}

/**
 * print_hex_content - Prints the hexadecimal content of a line
 *
 * @b: The buffer to print
 * @size: The number of bytes to print
 * @offset: The offset of the line
 */

void print_hex_content(char *b, int size, unsigned int offset)
{
	int i;

	for (i = 0; i < size; i += 2)
	{
		if (i < size - 1)
			printf("%02x%02x ", b[i] & 0xff, b[i + 1] & 0xff);
		else
			printf("%02x   ", b[i] & 0xff);
	}

	for (i = 0; i < size; i++)
	{
		if (b[i] >= 32 && b[i] <= 126)
			printf("%c", b[i]);
		else
			printf(".");
	}

	printf("\n");
}

/**
 * print_buffer - Prints a buffer
 *
 * @b: The buffer to print
 * @size: The number of bytes to print
 */

void print_buffer(char *b, int size)
{
	int i;
	unsigned int offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (size > 0)
	{
		if (size >= 10)
			print_hex_offset(offset);
		else
			printf("%08x: ", offset);
		print_hex_content(b, size > 10 ? 10 : size, offset);

		size -= 10;
		b += 10;
		offset += 10;
	}
}
