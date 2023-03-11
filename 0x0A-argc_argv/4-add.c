#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (int i = 1; i < argc; i++)
{
for (char *ptr = argv[i]; *ptr; ptr++)
{
if (!isdigit(*ptr))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
