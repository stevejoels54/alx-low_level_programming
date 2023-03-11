#include <stdio.h>

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: Zero always
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; argv[0][i] != '\0'; i++)
{
putchar(argv[0][i]);
}
putchar('\n');
return (0);
}
