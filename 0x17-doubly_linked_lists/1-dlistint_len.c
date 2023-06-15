#include "lists.h"

/**
* dlistint_len - Finds the number of elements in a linked list.
* @h: Pointer to the head of the doubly linked list.
* Return: The number of elements in the doubly linked list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
