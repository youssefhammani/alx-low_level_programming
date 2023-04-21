#include <stdio.h>

/**
 * main - The entry point for program to get header of ELF file
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	int i;

	printf("Number of arguments: %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s (address: %p)\n", i, argv[i], (void *)argv[i]);
	}

	return 1;
}
