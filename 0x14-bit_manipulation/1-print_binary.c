#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1;
	int count = 0;

	if (n == 0)
		_putchar('0');

	while (bit_mask <= n)
	{
		bit_mask = bit_mask << 1;
		count++;
	}

	bit_mask = bit_mask >> 1;

	while (bit_mask > 0)
	{
		if (n & bit_mask)
			_putchar('1');
		else
			_putchar('0');
		bit_mask = bit_mask >> 1;
	}
}
