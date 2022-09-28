#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int b;
	unsigned int c, d;

	c = 0;
	d = 0;

	for (b = 0; b < size; b++)
	{
		c += a[(size * b) + b];
		d += a[(size * (b + 1)) - (b + 1)];
	}
	printf("%d, %d\n", c, d);
}
