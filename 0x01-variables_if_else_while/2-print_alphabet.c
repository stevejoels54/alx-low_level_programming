#include <stdio.h>

/**
* main - main function of program
* Description: prints the alphabet using putchar
* Return: 0
*/

int main(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
