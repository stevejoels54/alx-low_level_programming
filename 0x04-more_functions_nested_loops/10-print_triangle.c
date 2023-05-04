#include "main.h"

/**
* print_triangle - Entry point
* @size: variable to pass in function to print triangle
* Description: function that prints a triangle, followed by a new line
* Return: void
*/

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - 1; j > i; j--)
{
_putchar(' ');
}
for (j = 0; j < i + 1; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
