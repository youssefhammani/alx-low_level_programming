#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 * at a given position in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	if (current == NULL)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);

	return (1);
}
