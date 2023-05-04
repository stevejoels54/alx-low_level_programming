#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int num1, num2, tens1, ones1, tens2, ones2;

for (num1 = 0; num1 <= 99; num1++)
{
tens1 = num1 / 10;
ones1 = num1 % 10;

for (num2 = num1; num2 <= 99; num2++)
{
tens2 = num2 / 10;
ones2 = num2 % 10;

if (num1 != num2)
{
putchar(tens1 + '0');
putchar(ones1 + '0');
putchar(' ');
putchar(tens2 + '0');
putchar(ones2 + '0');

if (num1 != 98 || num2 != 99)
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
