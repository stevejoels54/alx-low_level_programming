#include "main.h"

/**
* print_last_digit - Entry point
* @n: value passed to function to get last digit
* Description: function that computes the absolute value of an integer
* Return: last digit of passed number
*/

int print_last_digit(int n)
{
_putchar((n < 0 ? (n % 10) * -1 : n % 10) + '0');
return ((n < 0 ? (n % 10) * -1 : n % 10));
}
