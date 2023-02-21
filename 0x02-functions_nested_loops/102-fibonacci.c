#include <stdio.h>

/**
* main - Entry point
* Description: program that prints the first 50 Fibonacci numbers
* ,starting with 1 and 2
* Return: 0 always
*/

int main(void)
{
int n = 50;
int fib[n];
int i;

/**compute the Fibonacci sequence*/
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

/**print the Fibonacci sequence separated by comma and space*/
for (i = 0; i < n; i++)
{
printf("%d", fib[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");

return (0);
}
