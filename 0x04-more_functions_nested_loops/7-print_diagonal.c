#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: integer variable
 * Return: 0
 */

void print_diagonal(int n)
{
	int p, q;

	for (p = 0; p < n; p++)
	{
		for (q = 0; q < p; q++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
