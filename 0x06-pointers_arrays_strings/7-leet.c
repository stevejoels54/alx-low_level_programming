#include "main.h"

/**
* *leet - Entry point
* @str: string to convert
* Description: function that encodes a string into 1337
* Return: capitalized words
*/

char *leet(char *str)
{
int i, j = 0;
char leet[5][3] = {
{'a', 'A', '4'},
{'e', 'E', '3'},
{'o', 'O', '0'},
{'t', 'T', '7'},
{'l', 'L', '1'}};

while (str[i] != '\0')
{
for (j = 0; j < 5; j++)
{
if (str[i] == leet[j][0] || str[i] == leet[j][1])
{
str[i] = leet[j][2];
}
}
i++;
}
return (str);
}
