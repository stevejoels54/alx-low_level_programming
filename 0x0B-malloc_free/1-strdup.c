#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: String to be copied.
 * Return: If str is NULL or insufficient memory - NULL.
 *         Otherwise - pointer to duplicated string.
 */

char *_strdup(char *str)
{

	unsigned int i, len = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';

	return (dup);
}
