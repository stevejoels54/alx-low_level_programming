#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;
	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
