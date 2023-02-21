#include "main.h"

/**
* print_to_98 - Entry point
* @n: var to passed in func to start from
* Description: function that prints every minute of the day of Jack Bauer
* , starting from 00:00 to 23:59
* Return: void
*/

void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
_putchar('98');
}
}
