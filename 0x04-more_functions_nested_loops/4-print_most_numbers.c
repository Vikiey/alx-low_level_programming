#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers
 * from 0 to 9, followed by a new line
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int p;

	for (p = 48; p <= 57; p++)
	{
		if (p != 50 && p != 52)
			_putchar(p);
	}
	_putchar('\n');
}
