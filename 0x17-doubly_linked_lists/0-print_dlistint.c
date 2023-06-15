#include "lists.h"

/**
* print_dlistint - Prints all the elements of a doubly linked list.
* @h: Pointer to the head of the doubly linked list.
* Return: The number of nodes in the doubly linked list.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
