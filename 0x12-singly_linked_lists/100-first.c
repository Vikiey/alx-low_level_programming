#include <stdio.h>

/**
 * print - uses printf to print
 * __attribute__((constructor)): attribute used
 * to specify that 'print' function should be
 * executed before the main function
 */

void __attribute__((constructor)) print(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
