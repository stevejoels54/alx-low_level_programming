#include <stdio.h>
#include "main.h"

void print_hex(char *b, int size);
void print_ascii(char *b, int size);

/**
 * print_hex - Entry
 * Description: Prints hex value
 * @b: The buffer to be printed in hex.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_hex(char *b, int size)
{
int i;
printf("%08x:", (unsigned int)b);
for (i = 0; i < 10; i++)
{
if (i < size)
{
printf(" %02x", b[i] & 0xff);
}
else
{
printf("   ");
}
}
printf("  ");
}

/**
 * print_ascii - Entry
 * Description: Prints ascii value
 * @b: The buffer to be printed in ascii.
 * @size: The number of bytes to be printed from the buffer
 */

void print_ascii(char *b, int size)
{
int i;
for (i = 0; i < 10; i++)
{
if (i < size)
{
if (b[i] >= 32 && b[i] <= 126)
{
printf("%c", b[i]);
}
else
{
printf(".");
}
}
else
{
printf(" ");
}
}
printf("\n");
}

/**
 * print_buffer - Entry
 * Description: Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */


void print_buffer(char *b, int size)
{
int i;
if (size <= 0)
{
printf("\n");
}
for (i = 0; i < size; i += 10)
{
print_hex(b + i, size - i);
print_ascii(b + i, size - i);
}
}
