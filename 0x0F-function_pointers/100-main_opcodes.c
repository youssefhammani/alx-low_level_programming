#include <stdio.h>
#include <stdlib.h>

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
		exit(2);
	}

	unsigned char *main_ptr = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x ", *(main_ptr + i));
	}
	printf("\n");

	return (0);
}
