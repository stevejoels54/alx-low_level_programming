#include "search_algos.h"

/**
*binary_search - searches for a value in a sorted array of integers
*		 using the Binary search algorithm
*@array: pointer to the first element of the array to search
*@size: number of elements in array
*@value: value to search for
*
*Return: first index where value is located
*         otherwise, value not present or array NULL, -1
*
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, x;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (x = low; x < high; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}
	return (-1);
}
