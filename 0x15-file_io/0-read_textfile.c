#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 * or 0 if there is an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten, total = 0;
	char buf[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((nread = read(fd, buf, sizeof(buf))) > 0 && total < letters)
	{
		nwritten = write(STDOUT_FILENO, buf,
				(nread < letters - total) ? nread : letters - total);
		if (nwritten != nread)
		{
			close(fd);
			return (0);
		}
		total += nwritten;
	}
	close(fd);

	return (total);
}
