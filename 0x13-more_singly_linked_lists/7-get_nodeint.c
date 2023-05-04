#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting at 0
 *
 * Return: Address of the node at index or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
