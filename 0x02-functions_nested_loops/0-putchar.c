#include "main.h"

/**
* main - main function of program
* Description: prints "_putchar"
* Return: 0
*/

int main(void)
{
char string[] = "_putchar\n";
int i = 0;
while (string[i] != '\0')
{
_putchar(string[i]);
i++;
}
return (0);
}
