#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the memory to print
 * @c: type char
 * Return: pointer to array or NULL if size = 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int p;

	if (size == 0)
		return (NULL);

	n = malloc(size * sizeof(*n));

	if (n == NULL)
		return (NULL);
	for (p = 0; p < size; p++)
		n[p] = c;

	return (n);
}
