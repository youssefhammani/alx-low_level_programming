#include "lists.h"

/**
 * free_list - Frees a linked list_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
