#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node = *head;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* populate the new node with data */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* if the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* otherwise, traverse the list to find the last node */
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* append the new node to the end of the list */
	last_node->next = new_node;

	return (new_node);
}
