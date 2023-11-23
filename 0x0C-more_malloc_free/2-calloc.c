#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory
 * for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of bytes
 * Return: pointer to allocated memory or NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		arr[a] = 0;

	return (arr);
}
