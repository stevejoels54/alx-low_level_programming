#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *strings_add(char *n1, char *n2, char *r, int r_index);

/**
 * strings_add - Adds numbers stored in 2 strings.
 * @n1: String containing first number to be added.
 * @n2: String containing second number to be added.
 * @r: Buffer to store the result.
 * @r_index: Current index of the buffer.
 * Return: A pointer to the result or 0.
 */

char *strings_add(char *n1, char *n2, char *r, int r_index)
{
int num, tens = 0;

for (; *n1 && *n2; n1--, n2--, r_index--)
{
num = (*n1 - '0') + (*n2 - '0');
num += tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n1; n1--, r_index--)
{
num = (*n1 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

for (; *n2; n2--, r_index--)
{
num = (*n2 - '0') + tens;
*(r + r_index) = (num % 10) + '0';
tens = num / 10;
}

if (tens && r_index >= 0)
{
*(r + r_index) = (tens % 10) + '0';
return (r + r_index);
}

else if (tens && r_index < 0)
{
return (0);
}
return (r + r_index + 1);
}
/**
 * infinite_add - Adds two numbers.
 * @n1: First number to added.
 * @n2: Second number to added.
 * @r: Buffer to store result.
 * @size_r: Buffer size.
 * Return: A pointer to the result or 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int index, n1_len = 0, n2_len = 0;

for (index = 0; *(n1 + index); index++)
{
n1_len++;
}

for (index = 0; *(n2 + index); index++)
{
n2_len++;
}

if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
{
return (0);
}

n1 += n1_len - 1;
n2 += n2_len - 1;
*(r + size_r) = '\0';
return (strings_add(n1, n2, r, --size_r));
}
