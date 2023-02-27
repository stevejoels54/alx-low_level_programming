#include "main.h"

/**
* _atoi - Entry point
* @s: string number to convert to int
* Description:  function that convert a string to an integer
* Return: integer
*/

int _atoi(char *s)
{
int sign = 1, result = 0, i = 0;
while (s[i] == ' ' || s[i] == '\t')
{
i++;
}
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
sign = 1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
if (result > (INT_MAX / 10) || 
(result == (INT_MAX / 10) && digit > (INT_MAX % 10)))
{
if (sign == 1)
{
return (INT_MAX);
}
else
{
return (INT_MIN);
}
}
result = (result * 10) + digit;
i++;
}
return (result * sign);
}
