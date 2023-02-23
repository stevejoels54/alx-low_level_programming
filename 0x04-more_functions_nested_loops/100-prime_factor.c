#include <stdio.h>

/**
* main - Entry point
* Description: program that finds and prints the largest
* prime factor of the number 612852475143
* Return: 0 always
*/

int main(void)
{
long int n = 612852475143;
long int factor = 2;
long int largest_factor = 1;
while (n > 1)
{
if (n % factor == 0)
{
n = n / factor;
largest_factor = factor;
}
else
{
factor++;
}
}
printf("%ld\n", largest_factor);
return (0);
}
