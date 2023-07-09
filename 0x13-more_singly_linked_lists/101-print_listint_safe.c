#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_loop_message - Prints a message indicating the presence of a loop.
 */
void print_loop_message(void)
{
	char *message = "Loop detected, cannot print list\n";

	while (*message)
	{
		_putchar(*message);
		message++;
	}
}

/**
 * print_node_data - Prints the address and value of a listint_t node.
 * @node: Pointer to the listint_t node.
 */
void print_node_data(const listint_t *node)
{
	size_t addr = (size_t)node;
	size_t value = node->n;
	size_t divisor = 1;

	while (divisor <= addr / 10)
		divisor *= 10;

	while (divisor > 0)
	{
		_putchar('[');
		print_number(addr / divisor);
		_putchar(']');
		_putchar(' ');
		print_number(value / divisor);
		_putchar('\n');
		addr %= divisor;
		value %= divisor;
		divisor /= 10;
	}
}

/**
 * print_number - Prints a number digit by digit.
 * @num: The number to be printed.
 */
void print_number(size_t num)
{
	if (num == 0)
	{
		putchar('0');
		return;
	}

	if (num / 10)
		print_number(num / 10);
	putchar((num % 10) + '0');
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			print_loop_message();
			exit(98);
		}
	}

	while (head != NULL)
	{
		print_node_data(head);
		head = head->next;
		count++;
	}

	return (count);
}
