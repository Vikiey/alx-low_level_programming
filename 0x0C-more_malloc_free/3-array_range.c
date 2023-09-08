#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximim
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a, size;
	int *pt;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	pt = malloc(size * sizeof(*pt));
	if (pt == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		pt[a] = min + a;

	return (pt);
}
