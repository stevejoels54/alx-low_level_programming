#include "main.h"

/**
* _strlen - Entry point
* @s: string whose length to find
* Description: function that returns the length of a string
* Return: Lenght of string
*/

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
