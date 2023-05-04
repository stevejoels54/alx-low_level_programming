#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to be checked
 * @index: The index of the bit to be checked
 *
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask = 1;

	if (index > 63)
	{
		return (-1);
	}

	bit_mask = bit_mask << index;

	if (n & bit_mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
