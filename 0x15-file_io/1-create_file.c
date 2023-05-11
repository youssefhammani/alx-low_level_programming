#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string whose length is to be calculated
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * create_file - creates a file with the specified text content
 * @filename: the name of the file to create
 * @text_content: the text to write to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		num_written = write(fd, text_content, _strlen_recursion(text_content));

	close(fd);

	return (num_written == -1 ? -1 : 1);
}

