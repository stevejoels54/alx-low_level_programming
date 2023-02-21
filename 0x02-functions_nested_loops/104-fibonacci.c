#include <stdio.h>

/**
* main - Entry point
* Description: program that finds and prints the first 98 Fibonacci numbers
* ,starting with 1 and 2, followed by a new line
* Return: 0 always
*/

int main(void)
{
int term = 1;
int prev = 1;
int temp;
int count = 2;
printf("%d, %d", term, prev);
while (count < 98)
{
temp = term + prev;
prev = term;
term = temp;
count++;
printf(", %d", term);
}
printf("\n");
return (0);
}
