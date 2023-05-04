#include "lists.h"

size_t count_looping_nodes(listint_t *head);

/**
 * count_looping_nodes - Counts the number of non looping nodes in a loop
 * @head: Pointer to pointer to the head node
 * Algorithm: Floyd's cycle-finding algorithm
 *
 * Return: Number of non looping nodes in the loop
 */

size_t count_looping_nodes(listint_t *head)
{
	listint_t *one_step, *two_step;
	size_t count = 0;

	one_step = head;
	two_step = head->next;

	while (two_step && two_step->next)
	{
		if (one_step == two_step)
		{
			one_step = head;
			while (one_step != two_step)
			{
				one_step = one_step->next;
				two_step = two_step->next;
				count++;
			}
			return (count);
		}
		one_step = one_step->next;
		two_step = two_step->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t linked list with loop detection
 * @h: Pointer to pointer to the head node
 *
 * Return: Size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *next_node;
	size_t unique_nodes = 0;

	unique_nodes = count_looping_nodes(*h);
	if (unique_nodes == 0)
	{
		current_node = *h;
		while (current_node)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
		}
		*h = NULL;
	}
	else
	{
		current_node = *h;
		while (unique_nodes)
		{
			next_node = current_node->next;
			free(current_node);
			current_node = next_node;
			unique_nodes--;
		}
		*h = NULL;
	}

	return (unique_nodes);
}
