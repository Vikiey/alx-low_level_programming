#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int b;
	char *new, *al;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
			}
	if (ptr == NULL)
		return (malloc(new_size));

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	al = ptr;
	for (b = 0; b < old_size; b++)
		new[b] = al[b];
	free(ptr);
	return (new);
}
