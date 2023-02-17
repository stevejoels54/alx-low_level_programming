#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (success)
 */
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);

if (i != '9')
{
putchar(',');
putchar(' ');
}

i++;
}

putchar('\n');
return (0);
}
