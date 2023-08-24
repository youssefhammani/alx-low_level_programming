#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in a dlistint_t list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be inserted. Index starts at 0.
 * @n: Value to set in the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

			for (i = 0; i < idx - 1 && current != NULL; i++)
				current = current->next;

	if (current == NULL && i < idx - 1)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
