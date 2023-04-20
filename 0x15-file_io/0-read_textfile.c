#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 * or 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nread;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buf, letters);
	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, nread) != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (nread);
}

