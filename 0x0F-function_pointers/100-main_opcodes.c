#include "3_calc.h"

/**
 * print_opcodes - prints the opcodes of a given function
 * @num_bytes: the number of bytes to print
 *
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(ptr + i));
	}

	printf("\n");
}

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful,
 * 1 if incorrect number of arguments,
 * 2 if negative number of bytes
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2)
	}

	print_opcodes(num_bytes);

	return (0);
}
