#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: the converted number,
 *         or 0 if there is one or more chars in the string
 *         or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int count_len = 0;

	if (b == NULL)
		return (0);

	while (b[count_len] != '\0')
	{
		if (b[count_len] != '0' && b[count_len] != '1')
			return (0);
		number = number << 1;
		if (b[count_len] == '1')
			number = number ^ 1;
		count_len++;
	}
	return (number);
}
