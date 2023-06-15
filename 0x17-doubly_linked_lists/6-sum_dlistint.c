#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * Return: Sum of all the data (n) of a listint_t linked list
 *       0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
