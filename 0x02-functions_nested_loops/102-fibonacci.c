#include <stdio.h>

/**
* main - Entry point
* Description: program that prints the first 50 Fibonacci numbers
* ,starting with 1 and 2
* Return: 0 always
*/

int main(void)
{
int n = 50, first = 1, second = 2, next, i;
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d", first);
}
else if (i == 1)
{
printf(", %d", second);
}
else
{
next = first + second;
printf(", %d", next);
first = second;
second = next;
}
}
printf("\n");
return (0);
}
