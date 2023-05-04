#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks endianness
 *
 * Return: 0 - big endian, 1 - little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *check = (char *)&i;

	return ((int)*check);
}
