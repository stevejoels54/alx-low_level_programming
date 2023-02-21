#include <stdio.h>
#include "main.h"

/**
* print_times_table - Entry point
* @n: variable passed to function to print table
* Description: function that prints the n times table, starting with 0
* Return: void
*/

void print_times_table(int n)
{
int i, j, product;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (product > 99)
{
printf(", %d", product);
}
else if (product > 9)
{
printf(",  %d", product);
}
else
{
if (j != 0)
{
printf(",   %d", product);
}
else
{
printf("%d", product);
}
}
}
printf("\n");
}
}

