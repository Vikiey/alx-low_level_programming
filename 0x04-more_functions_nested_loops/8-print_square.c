#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of square
 * Return: 0
 */

void print_square(int size)
{
	int j;

	for (j = 0; j < size; j++)
		_putchar(35);
	_putchar('\n');
}
