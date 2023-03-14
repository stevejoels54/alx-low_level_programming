#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: size array to be initialized.
 * @c: char to intialize the array with
 * Return: size == 0 or the function fails - NULL.
 *         Otherwise - pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return (NULL);
}

char *arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
