#include <stdio.h>

/**
* main - main function of program
* Description: prints the alphabet using putchar
* Return: 0
*/

int main(void)
{
char *alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
return (0);
}
