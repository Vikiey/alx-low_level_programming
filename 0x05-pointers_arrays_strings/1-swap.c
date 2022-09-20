#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the value of two integers
 * @a: integer input 1
 * @b: integer input 2
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
