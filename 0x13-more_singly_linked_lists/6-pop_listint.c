#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The head node's data (n)
 *        0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int n;

	if (*head == NULL)
		return (0);

	current_node = *head;
	n = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (n);
}
