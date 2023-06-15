#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 *
 * Return: Address of the node at index or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	size_t count = 0;

	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		current_node = current_node->next;
		count++;
	}

	return (NULL);
}
