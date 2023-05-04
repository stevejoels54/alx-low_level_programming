#include <stdio.h>

#define MAX 10000000000

/**
 * main - Entry point
 * Description: Find and print the first 98 Fibonacci numbers starting with
 * 1 and 2. Numbers should be comma and space separated.
 * Return: 0 Always
 */
int main(void)
{
unsigned long int a = 0, b = 1, c = 0, d = 2;
unsigned long int hold1, hold2, hold3;
int i;
printf("%lu, %lu, ", b, d);
for (i = 2; i < 98; i++)
{
if (b + d > MAX || c > 0)
{
hold1 = (b + d) / MAX;
hold2 = (b + d) % MAX;
hold3 = a + c + hold1;
a = c;
c = hold3;
b = d;
d = hold2;
printf("%lu%010lu", c, d);
}
else
{
d = b + d;
b = d - b;
printf("%lu", d);
}
if (i != 97)
{
printf(", ");
}
}
printf("\n");
return (0);
}
