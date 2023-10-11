#include "search_algos.h"

/**
*linear_search - searches for a value in an array of integers
*		using the Linear search algorithm
*@array: pointer to the first element of the array to search
*@size: number of elements in array
*@value: value to search for
*
*Return: first index where value is located
*         otherwise, value not present or array NULL, -1
*
*/

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);
	}

	return (-1);
}
