#include "main.h"

/**
 * reverse_array - Entry point
 * @a: an array of integers
 * @n: the number of elements to swap
 * Description: function that reverses the content of an array of integers
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j = n - 1;
int temp;
while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
