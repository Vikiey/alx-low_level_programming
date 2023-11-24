#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates
 * a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: NULL if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int s;
	char *nnew, *alt;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nnew = malloc(new_size);

	if (nnew == NULL)
		return (NULL);

	alt = ptr;
	for (s = 0; s < old_size; s++)
		nnew[s] = alt[s];

	free(ptr);
	return (nnew);
}
