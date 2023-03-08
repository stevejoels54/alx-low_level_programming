#include "main.h"

int _strlen_recursion(char *s);
int is_palindrome_rec(char *s, int start, int end);

/**
 * is_palindrome - finds  palindrome
 * @s: string to test
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (is_palindrome_rec(s, 0, len - 1));
}

/**
 * is_palindrome_rec - Recursive helper function for is_palindrome.
 *
 * @s: The string to check.
 * @start: The index of the first character to check.
 * @end: The index of the last character to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */

int is_palindrome_rec(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_rec(s, start + 1, end - 1));
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
