#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements
 *               in a linked listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
