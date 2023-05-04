#include "main.h"

/**
* *_strncat - Entry point
* @dest: destination pointer
* @src: src pointer
* @n: char number to start at
* Description: function that concatenates two strings
* Return: Pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
