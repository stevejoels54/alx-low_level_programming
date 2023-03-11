#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: Zero always
 */

int main(int argc, char *argv[])
{
int i = 0;
if (argc == 1)
{
printf("%d\n", argc - 1);
}
else
{
while (*argv)
{
i++;
argv++;
}
printf("%d\n", i - 1);
}
return (0);
}
