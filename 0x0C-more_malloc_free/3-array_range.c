#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int arr_size, n;
	int *arr;

	arr_size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(arr) * arr_size);

	if (arr == NULL)
		return (NULL);

	for (n = 0; n < arr_size; n++)
		arr[n] = min + n;

	return (arr);
}
