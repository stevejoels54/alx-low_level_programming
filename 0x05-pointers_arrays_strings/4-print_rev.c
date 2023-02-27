#include "main.h"

/**
* print_rev - Entry point
* @s: string to reverse print
* Description: function that prints a string, in reverse, followed by a new line
* Return: Nothing
*/

void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
putchar(s[i]);
i--;
}
}
