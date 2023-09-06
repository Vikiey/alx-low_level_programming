#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the memory to print
 * @c: type char
 * Return: NULL if size = 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));

	if (a == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		a[n] = c;

	return (a);
}
