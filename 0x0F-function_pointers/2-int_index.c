#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @size: number of elements in the array array
 * @array: array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if size <= 0 or if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (d = 0; d < size; d++)
	{
		if (cmp(array[d]))
			return (d);
	}

	return (-1);
}
