#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the list
 * @idx: Index of the list where the new node should be added (starting at 0)
 * @n: Integer to be added to the new node
 * Return: Address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	current_node = *h;
	while (current_node != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			new_node->prev = current_node;
			if (current_node->next != NULL)
				current_node->next->prev = new_node;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
