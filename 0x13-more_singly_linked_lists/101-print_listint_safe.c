#include <unistd.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _write_char - Writes a character to the standard output.
 * @c: The input character.
 *
 * Return: The number of bytes written.
 */
ssize_t _write_char(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * _write_str - Writes a string to the standard output.
 * @str: The input string.
 *
 * Return: The number of bytes written.
 */
ssize_t _write_str(const char *str)
{
	size_t len = 0;
	ssize_t bytes_written = 0;

	while (str[len] != '\0')
		len++;

	bytes_written = write(STDOUT_FILENO, str, len);

	return (bytes_written);
}

/**
 * _write_num - Writes an integer to the standard output.
 * @num: The input number.
 *
 * Return: The number of bytes written.
 */
ssize_t _write_num(int num)
{
	char buffer[12];
	ssize_t bytes_written = 0;

	if (num < 0)
	{
		bytes_written += _write_char('-');
		num *= -1;
	}
	if (num == 0)
	{
		bytes_written += _write_char('0');
		return (bytes_written);
	}

	if (num >= 10)
	{
		bytes_written += _write_num(num / 10);
	}

	bytes_written += _write_char('0' + (num % 10));
	return (bytes_written);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;
	char newline = '\n';

	while (current != NULL)
	{
		ssize_t bytes_written = 0;
		const void *address = (const void *)current;

		bytes_written += _write_str("[0x");
		bytes_written += _write_num((int)(intptr_t)address);
		bytes_written += _write_str("] ");
		bytes_written += _write_num(current->n);
		bytes_written += _write_char(newline);
		if (bytes_written == -1)
			exit(98);
		count++;
		if (current->next >= current)
		{
			loop_node = current->next;
			break;
		}
		current = current->next;
	}

	if (loop_node != NULL)
	{
		ssize_t bytes_written = 0;
		const void *address = (const void *)loop_node;

		bytes_written += _write_str("-> [0x");
		bytes_written += _write_num((int)(intptr_t)address);
		bytes_written += _write_str("] ");
		bytes_written += _write_num(loop_node->n);
		bytes_written += _write_char(newline);
		if (bytes_written == -1)
			exit(98);
	}
	return (count);
}
