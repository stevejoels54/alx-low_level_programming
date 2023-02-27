#include "main.h"

/**
* swap_int - Entry point
* @a: first swap variable
* @b: second swap variable
* Description: function that swaps the values of two integers
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
