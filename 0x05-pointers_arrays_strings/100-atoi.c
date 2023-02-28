#include "main.h"

/**
* _atoi - Entry point
* @s: string number to convert to int
* Description:  function that convert a string to an integer
* Return: integer
*/

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
for (; *s; s++)
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
}
return (num *sign);
}
