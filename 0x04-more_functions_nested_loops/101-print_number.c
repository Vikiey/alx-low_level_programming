#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer
 * @n: integer input
 * Return: void
 */

void print_number(int n)
{
	if (n == 0)
		_putchar ('0');
	else if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else
		print_number(n);
}
