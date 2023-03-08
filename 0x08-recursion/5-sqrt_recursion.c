#include "main.h"

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: Number to find square root for.
 * Return: n, square root of the number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
return (n * _sqrt_recursion(n - 1));
}
