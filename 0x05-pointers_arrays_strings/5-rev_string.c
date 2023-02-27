#include "main.h"

/**
* rev_string - Entry point
* @s: string to reverse print
* Description: function that reverses a string
* Return: Nothing
*/

void rev_string(char *s)
{
int i = 0;
int j = 0;
char temp;
while (s[i] != '\0')
{
i++;
}
i = i - 1;
while (j < i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
j++;
i--;
}
}
