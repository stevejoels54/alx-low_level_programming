#include <stdio.h>

/**
* main - Entry point
* Description: program that prints the first 50 Fibonacci numbers
* ,starting with 1 and 2
* Return: 0 always
*/

int main(void)
{
unsigned long long a = 1, b = 2, c;
int i;
printf("%llu, %llu", a, b);
for (i = 2; i < 50; i++)
{
c = a + b;
printf(", %llu", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
