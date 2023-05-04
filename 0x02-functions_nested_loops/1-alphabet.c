#include "main.h"

/**
* print_alphabet - prototype
* Description:  prints the alphabet in lowercase followed by a new line
* Return: void
*/

void print_alphabet(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
