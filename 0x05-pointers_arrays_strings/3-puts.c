#include "main.h"

/**
* _puts - Entry point
* @str: string to print
* Description: function that prints a string, followed by a new line, to stdout
* Return: Nothing
*/

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
