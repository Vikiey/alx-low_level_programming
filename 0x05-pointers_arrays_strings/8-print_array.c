#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: int pointer
 * @n: int
 */

void print_array(int *a, int n)
{
	int i, j;

	j = n - 1;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < j)
			printf(", ");
	}
	printf("\n");
}
