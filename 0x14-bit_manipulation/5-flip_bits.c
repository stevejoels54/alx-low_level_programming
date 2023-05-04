#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 *             from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits needed to flip to get from one number
 *         to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_mask = 1;
	unsigned int bits_count = 0;

	while (bit_mask <= n || bit_mask <= m)
	{
		if ((n & bit_mask) != (m & bit_mask))
			bits_count++;
		bit_mask = bit_mask << 1;
	}
	return (bits_count);
}
