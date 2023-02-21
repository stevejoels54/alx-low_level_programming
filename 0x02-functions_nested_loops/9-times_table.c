#include "main.h"

/**
* times_table - Entry point
* Description: function that prints the 9 times table, starting with 0
* Return: void
*/

void times_table(void)
{
int i, j, value;
for (i = 0; i < 10; i++)
{
value = 0;
for (j = 0; j < 10; j++)
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
