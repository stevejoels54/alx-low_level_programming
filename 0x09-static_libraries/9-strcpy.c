#include "main.h"

/**
* *_strcpy - Entry point
* @dest: destination pointer
* @src: src pointer
* Description: function that copies the string pointed to by src
* including the terminating null byte (\0), to the buffer pointed to by dest.
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
