#include "main.h"

/**
* _atoi - Entry point
* @s: string number to convert to int
* Description:  function that convert a string to an integer
* Return: integer
*/

int _atoi(char *s)
{
int sign = 1, num = 0, i = 0;
if (s[0] == '-')
{
sign = -1;
i++;
}
else if (s[0] == '+')
{
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
}
else
{
break;
}
i++;
}
return sign * num;
}
