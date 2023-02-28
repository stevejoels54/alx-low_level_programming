#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Description:  program that generates random valid
 * passwords for the program 101-crackme.
 * Return: Always zero
 */

#define PASSWORD_LENGTH 6
#define CHARACTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

int main(void)
{
int sum = 0;
char c;

srand(time(NULL));
while (sum <= 2645)
{
    c = rand() % 128;
    sum += c;
    putchar(c);
}
putchar(2772 - sum);
return 0;

}
