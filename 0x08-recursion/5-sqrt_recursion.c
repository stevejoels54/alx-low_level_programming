#include "main.h"

int square_int(int n, int i);

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
if (n == 1)
{
return (1);
}
return (square_int(n, 2));
}

/**
 * square_int - Finds the natural square root of a number.
 * @n: number to find the square root of.
 * @i: root to be tested.
 * Return: square root if it has.
 *         -1 if it doesn't have.
 */

int square_int(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (square_int(n, i + 1));
}
