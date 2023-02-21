#include <stdio.h>
#include <math.h>

/**
* main - Entry point
* Description: program that finds and prints the first 98 Fibonacci numbers
* ,starting with 1 and 2, followed by a new line
* Return: 0 always
*/

int main(void)
{
const double phi = (1 + sqrt(5)) / 2;
double fib = 1, prev = 1, temp;
int i;
printf("%.0lf, %.0lf, ", prev, fib);
for (i = 3; i <= 98; i++)
{
temp = fib;
fib = round(pow(phi, i - 1) / sqrt(5));
prev = round(temp);
printf("%.0lf", fib);
if (i != 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
