#include <stdio.h>

void __attribute__((constructor)) before_main();

/**
 * before_main - Prints a statement before the
 *               main function is executed
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	      "I bore my house upon my back!\n");
}
