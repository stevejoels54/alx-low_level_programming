#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/* Function prototypes */
int check_args(int argc, char *argv[]);
int is_valid_number(char *num);
int *multiply(char *num1, char *num2);

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	/* Check command line arguments */
	if (check_args(argc, argv) == 0)
	{
		printf("Error\n");
		return (98);
	}

	/* Multiply numbers */
	int *result = multiply(argv[1], argv[2]);

	/* Print result */
	int i = 0;

	while (result[i] == 0 && i < strlen(argv[1]) + strlen(argv[2]))
	{
		i++;
	}
	if (i == strlen(argv[1]) + strlen(argv[2]))
	{
		printf("0\n");
	}
	else
	{
		for (; i < strlen(argv[1]) + strlen(argv[2]); i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}

	/* Free memory */
	free(result);

	return (0);
}

/**
 * check_args - check command line arguments.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 * Return: If number of args != 3 or number inalid - 0
 *         Otherwise - 1
 */

int check_args(int argc, char *argv[])
{
	/* Check number of arguments */
	if (argc != 3)
	{
		return (0);
	}

	/* Check that numbers are valid */
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		return (0);
	}

	return (1);
}

/**
 * is_valid_number - check if a string is a valid number
 * @num: number string passed to the program.
 * Return: If not digit - 0
 *         Otherwise - 1
 */

int is_valid_number(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * *multiply - Function to multiply two numbers
 * @num1: first value to multiply.
 * @num2: second value to multiply
 * Return: product of num1 * num2.
 */

int *multiply(char *num1, char *num2)
{
	/* Allocate memory for result */
	int *result = (int *)calloc(strlen(num1) + strlen(num2), sizeof(int));

	/* Multiply numbers */
	int i, j, carry, temp;

	for (i = strlen(num1) - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = strlen(num2) - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			result[i + j + 1] = temp % 10;
			carry = temp / 10;
		}
		result[i] += carry;
	}

	return (result);
}
