#include "main.h"

/**
* puts_half - Entry point
* @str: string whose half to print
* Description: function that prints half of a string, followed by a new line
* Return: Nothing
*/

void puts_half(char *str)
{
int i, len = 0;
int start;
while (str[len] != '\0')
{
len++;
}
start = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
for (i = start; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
