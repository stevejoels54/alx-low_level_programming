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
  char password[PASSWORD_LENGTH + 1];
  int i, index;

  srand(time(NULL));

  for (i = 0; i < PASSWORD_LENGTH; i++) {
    index = rand() % (sizeof(CHARACTERS) - 1);
    password[i] = CHARACTERS[index];
  }
  password[PASSWORD_LENGTH] = '\0';

  printf("%s\n", password);

  return (0);
}
