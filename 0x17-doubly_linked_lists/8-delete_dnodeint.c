#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a
 * dlistint_t doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *next_node, *prev_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		if (count == index)
		{
			prev_node = current_node->prev;
			next_node = current_node->next;
			if (prev_node != NULL)
				prev_node->next = next_node;
			if (next_node != NULL)
				next_node->prev = prev_node;
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
		count++;
	}

	return (-1);
}

