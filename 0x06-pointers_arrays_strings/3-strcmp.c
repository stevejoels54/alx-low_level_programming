#include "main.h"

/**
* _strcmp - Entry point
* @s1: first string to compare
* @s2: second string to compare
* Description: function that compares two strings
* Return: 1 for matching 0 not matching
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
