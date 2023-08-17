#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of square
 * Return: 0
 */

void print_square(int size)
{
	int j, k;

	for (j = 0; j < size; j++)
		for (k = 0; k < size; k++)
			_putchar(35);
		_putchar('\n');
	if (size <= 0)
		_putchar('\n');
}
