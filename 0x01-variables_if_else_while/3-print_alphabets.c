#include <stdio.h>

/**
* main - main function of program
* Description: prints alphabet in lower and upper case
* Return: 0
*/

int main(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
for (alph = 'A'; alph <= 'Z'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
