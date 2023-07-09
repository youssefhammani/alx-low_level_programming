#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	fast = head->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			break;

		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow != fast)
		return (NULL);

	slow = head;

	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}
