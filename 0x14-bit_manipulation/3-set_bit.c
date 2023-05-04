#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets value of a bit to 1 at a given index
 * @n: Number to be checked
 * @index: The index of bit to be checked
 *
 * Return: No error 1, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask = 1;

	if (index > 63)
	{
		return (-1);
	}

	bit_mask = bit_mask << index;
	*n = *n | bit_mask;
	return (1);
}
