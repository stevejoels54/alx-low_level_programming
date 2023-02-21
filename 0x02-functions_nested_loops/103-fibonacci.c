#include <stdio.h>

/**
* main - Entry point
* Description: program that finds and prints the sum of the
* even-valued terms, followed by a new line.
* all the multiples of 3 or 5 below 1024
* Return: 0 always
*/

int main(void)
{
int num1 = 1, num2 = 2, nextTerm, sum = 0;
while (num2 <= 4000000)
{
if (num2 % 2 == 0)
{
sum += num2;
}
nextTerm = num1 + num2;
num1 = num2;
num2 = nextTerm;
}
printf("%d\n", sum);
return (0);
}
