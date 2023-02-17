#include <stdio.h>

/**
* main - main function of program
* Description: prints all single digit numbers of base 10 from 0 using putchar
* Return: 0
*/

int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
