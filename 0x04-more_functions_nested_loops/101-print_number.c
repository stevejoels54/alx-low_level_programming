#include "main.h"

/**
* print_number - Entry point
* @n: value passed to function to print
* Description: function that prints an integer
* Return: void
*/

void print_number(int n)
{
unsigned int digit, divisor = 1;

if (n < 0)
{
_putchar(45);
n = -n;
}

while (n / divisor > 9)
{
divisor *= 10;
}
while (divisor)
{
digit = n / divisor;
n %= divisor;
divisor /= 10;
_putchar(digit + '0');
}
}
