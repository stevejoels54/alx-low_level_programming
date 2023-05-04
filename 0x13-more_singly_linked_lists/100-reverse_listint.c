#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *prev_node;

	if (*head == NULL)
		return (NULL);

	current_node = *head;
	prev_node = current_node->next;
	current_node->next = NULL;
	while (prev_node)
	{
		*head = prev_node;
		prev_node = prev_node->next;
		(*head)->next = current_node;
		current_node = *head;
	}

	return (*head);
}
