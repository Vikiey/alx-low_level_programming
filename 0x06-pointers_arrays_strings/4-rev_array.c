#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int p, var;

	for (p = 0; p < n; p++)
	{
		n--;
		var = a[p];
		a[p] = a[n];
		a[n] = var;
	}
}
