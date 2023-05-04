#include <stdio.h>

/**
* main - main function of program
* Description: prints the alphabet except q and e using putchar
* Return: 0
*/

int main(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
if (alph != 'q' && alph != 'e')
{
putchar(alph);
}
}
putchar('\n');
return (0);
}
