#include "main.h"

/**
* *_strncpy - Entry point
* @dest: destination pointer
* @src: src pointer
* @n: number of chars to copy from src
* Description: function that copies a string
* Return: Pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
