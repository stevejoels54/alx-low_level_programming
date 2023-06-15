#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a double list
 * @head: Pointer to the head of the list
 * @n: Integer to be added to the new node
 *
 * Return: Address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head != NULL)
	{
		dlistint_t *node = *head;

		while (node->next != NULL)
			node = node->next;

		node->next = new_node;
		new_node->prev = node;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
