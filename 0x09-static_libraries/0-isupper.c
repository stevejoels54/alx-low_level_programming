#include "main.h"

/**
* _isupper - Entry Point
* @c: variable passed into function for checking
* Description: function that checks for uppercase character
* Return: 1 if c is uppercase 0 otherwise
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
