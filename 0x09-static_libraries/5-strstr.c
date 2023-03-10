#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring to string
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, found;
for (i = 0; haystack[i] != '\0'; i++)
{
found = 1;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
found = 0;
j = needle[j];
}
}
if (found)
{
return (haystack + i);
}
}
return ('\0');
}
