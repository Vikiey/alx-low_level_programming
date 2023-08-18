#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: integer variable
 * Rwturn: 0
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size - a; b++)
		{
			_putchar(32);
		}
		for (b = 1; b <= a; b++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
