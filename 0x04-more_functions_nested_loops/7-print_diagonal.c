#include "main.h"

/**
* print_diagonal - Entry point
* @n: var passed to function to draw diagonals
* Description: function that draws a diagonal line on the terminal
* Return: void
*/

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
