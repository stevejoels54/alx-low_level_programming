#include <stdio.h>
#include "main.h"

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
int i, j;
unsigned char c;

if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", b[j]);
else
printf("   ");
}
printf(" ");
for (j = i; j < i + 10; j++)
{
if (j < size)
{
c = b[j];
if (c < 32 || c > 126)
printf(".");
else             
printf("%c", c);
}
else
printf(" ");
}
printf("\n");
}
}
