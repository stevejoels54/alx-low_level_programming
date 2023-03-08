#include "main.h"

int _strlen_recursion(char *s);

/**
 * is_palindrome - finds  palindrome
 * @s: string to test
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
int i;
for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
{
return (0);
}
}
return (1);
}

/**
 * _strlen_recursion - gets string length
 * @s: string to test
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
