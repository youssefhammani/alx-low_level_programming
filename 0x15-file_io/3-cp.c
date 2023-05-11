#include "main.h"

/**
 * handle_error - This function is called when an error occurs while copying
 * files and it prints an error message to stderr, closes any open file
 * descriptors, and exits with a status code of 98 or 99 depending on the
 * file descriptor that caused the error.
 * @msg: The error message to print.
 * @filename: The name of the file that caused the error.
 * @fd1: The file descriptor of the first file.
 * @fd2: The file descriptor of the second file.
*/
void handle_error(char *msg, char *filename, int fd1, int fd2)
{
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(fd1 == -1 ? 98 : 99);
}

/**
 * main - This function copies the contents of one file to another. It takes
 * two command-line arguments: the name of the file to copy from, and the name
 * of the file to copy to.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int fd1, fd2, len;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		handle_error("Error: Can't read from file", argv[1], fd1, -1);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		handle_error("Error: Can't write to", argv[2], fd1, fd2);

	while ((len = read(fd1, buffer, BUF_SIZE)) > 0)
	{
		if (write(fd2, buffer, len) != len)
			handle_error("Error: Can't write to", argv[2], fd1, fd2);
	}

	if (len == -1)
		handle_error("Error: Can't read from file", argv[1], fd1, fd2);

	if (close(fd1) == -1)
		handle_error("Error: Can't close fd", argv[1], fd1, fd2);

	if (close(fd2) == -1)
		handle_error("Error: Can't close fd", argv[2], fd1, fd2);

	return (0);
}

