#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Description:  program that generates random valid
 * passwords for the program 101-crackme.
 * Return: Always zero
 */

int main(void)
{
int sum = 0;
char c;

time_t t;
srand(time(&t));

while (sum <= 2645)
{
    c = rand() % 128;
    sum += c;
    putchar(c);
}
putchar(2772 - sum);
return 0;

}
