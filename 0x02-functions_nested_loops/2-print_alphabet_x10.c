#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description:  prints the alphabet in lowercase,
* followed by a new line ten times
* Return: void
*/

void print_alphabet_x10(void)
{
int alph, times;
for (times = 0; times < 10; times++)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
_putchar('\n');
}
}
