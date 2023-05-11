#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		res = write(fd, text_content, len);

	close(fd);

	if (res == -1)
		return (-1);

	return (1);
}

