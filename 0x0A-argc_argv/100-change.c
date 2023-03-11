#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "main.h"

/**
 * get_min_coins - Takes in exactly one argument for minimum coin count
 * @cents: cents to evaluate
 * Return: number of coins
 */

int get_min_coins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int num_coins = 0;
int i;
if (cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
num_coins++;
}
}
return (num_coins);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */

int main(int argc, char *argv[])
{
int cents;
int num_coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
else
{
num_coins = get_min_coins(cents);
printf("%d\n", num_coins);
}
return (0);
}
