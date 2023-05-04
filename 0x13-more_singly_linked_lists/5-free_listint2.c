#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	current_node = *head;
	if (head == NULL)
		return;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
