#include <stdio.h>

/**
* main - main function of program
* Description: prints the alphabet using putchar in reverse
* Return: 0
*/

int main(void)
{
int alph;
for (alph = 'z'; alph >= 'a'; alph--)
{
putchar(alph);
}
putchar('\n');
return (0);
}
