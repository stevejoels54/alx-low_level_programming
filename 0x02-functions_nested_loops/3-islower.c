#include "main.h"

/**
* _islower - Entry point
* @c: value passed to function for checking
* Description:  function that checks for lowercase character
* Return: 1 if true, 0 if false
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
