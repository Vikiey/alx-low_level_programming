#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* recursively calls the function and divides n by 2 */
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
