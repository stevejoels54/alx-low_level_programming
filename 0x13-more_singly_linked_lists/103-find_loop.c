#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the list
 * Algorithm: Floyd's cycle-finding algorithm
 *
 * Return: Address of the node where the loop starts
 *         or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one_step, *two_step;

	one_step = head;
	two_step = head;
	while (one_step && two_step && two_step->next)
	{
		one_step = one_step->next;
		two_step = two_step->next->next;
		if (one_step == two_step)
		{
			one_step = head;
			while (one_step != two_step)
			{
				one_step = one_step->next;
				two_step = two_step->next;
			}
			return (one_step);
		}
	}

	return (NULL);
}
