#include <stdio.h>

/**
* main - main function of program
* Description: prints all possible different combinations of two digits
* Return: 0
*/

int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
if (i != j)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
