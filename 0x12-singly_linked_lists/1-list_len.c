#include "lists.h"
#include <stdio.h>

/**
 * list_len - finds the number of elements in a linked list_t.
 * @h: pointer to the head of the list.
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
