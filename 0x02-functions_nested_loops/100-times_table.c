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
if (n < 0 || n > 15)
{
return;
}
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
printf("%-4d", i * j);
}
printf("\n");
}
}
