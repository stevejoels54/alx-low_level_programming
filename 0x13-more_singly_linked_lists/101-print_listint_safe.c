#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current_node, *next_node;

	if (head == NULL)
		exit(98);

	current_node = head;
	while (current_node)
	{
		next_node = current_node->next;

		printf("[%p] %d\n", (void *)current_node, current_node->n);
		nodes++;

		if (current_node <= next_node)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}

		current_node = next_node;
	}

	return (nodes);
}
