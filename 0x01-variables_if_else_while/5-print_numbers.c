#include <stdio.h>

/**
* main - main function of program
* Description: prints all single digit numbers of base 10 starting from 0
* Return: 0
*/

int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}
putchar('\n');
return (0);
}
