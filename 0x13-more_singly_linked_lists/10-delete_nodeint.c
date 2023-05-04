#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *next_node;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	current_node = *head;
	while (current_node)
	{
		if (count == index - 1)
		{
			next_node = current_node->next;
			current_node->next = next_node->next;
			free(next_node);
			return (1);
		}
		current_node = current_node->next;
		count++;
	}

	return (-1);
}
