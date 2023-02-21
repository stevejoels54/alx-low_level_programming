#include "main.h"

/**
* print_times_table - Entry point
* @n: variable passed to function to print table
* Description: function that prints the n times table, starting with 0
* Return: void
*/

void print_times_table(int n)
{
int i, j, value;
if (n != 15 || n != 0)
{
for (i = 0; i < n + 1; i++)
{
value = 0;
for (j = 0; j < n + 1; j++)
{
value = i * j;
if (j == 0)
{
_putchar('0');
}
else if (value > 9)
{
_putchar(',');
_putchar(' ');
_putchar(value / 10 + '0');
_putchar(value % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(value + '0');
}
}
_putchar('\n');
}
}
}
