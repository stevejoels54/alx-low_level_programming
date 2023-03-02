#include "main.h"

/**
* *cap_string - Entry point
* @str: string to convert
* Description: function that capitalizes all words of a string
* Return: capitalized words
*/

char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
{
str[i] = str[i] - 32;
}
else if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == ' ' ||
str[i - 1] == '\n' ||
str[i - 1] == ',' ||
str[i - 1] == ';' ||
str[i - 1] == '.' ||
str[i - 1] == '!' ||
str[i - 1] == '?' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '}')
{
str[i] = str[i] - 32;
}
}
i++;
}
return (str);
}
