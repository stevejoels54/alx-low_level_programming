#include "main.h"

int prime_int(int n, int i);

/**
 * is_prime_number - Tests if number is prime
 * @n: Number to test if prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (prime_int(n, 2));
}

/**
 * prime_int - Checks if a number is divisible.
 * @n: number to be checked.
 * @i: divisor.
 * Return: divisible - 0, not divisible - 1.
 */

int prime_int(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (prime_int(n, i + 1));
}
