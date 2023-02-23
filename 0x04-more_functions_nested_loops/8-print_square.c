#include "main.h"

/**
* print_square - Entry point
* @n: value passed to function to print square
* Description: function that prints a square, followed by a new line
* Return: void
*/

void print_square(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
}
