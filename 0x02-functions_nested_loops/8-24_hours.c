#include "main.h"

/**
* jack_bauer - Entry point
* Description: function that prints every minute of the day of Jack Bauer
* , starting from 00:00 to 23:59
* Return: void
*/

void jack_bauer(void)
{
int i, j, k, l;
/**Loop to print 00 : 00 to 23 : 59*/
for (i = 0; i < 3; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
/**Only print 00 : 00 to 23 : 59*/
if ((i <= 1 && j <= 9) || (i == 2 && j <= 3))
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
}
