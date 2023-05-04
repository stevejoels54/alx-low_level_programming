#include "main.h"

/**
* *string_toupper - Entry point
* @str: string to convert
* Description: function that changes all lowercase
* letters of a string to uppercase
* Return: Uppercase word
*/

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
