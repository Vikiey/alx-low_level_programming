#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: array to be reversed
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int c;
	int b = 0;

	while (b < n--)
	{
		c = a[b];
		a[b++] = a[n];
		a[n] = c;
	}
}
