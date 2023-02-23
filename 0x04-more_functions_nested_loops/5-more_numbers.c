#include "main.h"

/**
* more_numbers - Entry point
* Description: function that prints 10 times the numbers
* ,from 0 to 14 followed by a new line
* Return: void
*/

void more_numbers(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
k = j;
if (j > 9)
{
_putchar(j / 10 + '0');
k = j % 10;
}

_putchar(k + '0');
}
_putchar('\n');
}
}
