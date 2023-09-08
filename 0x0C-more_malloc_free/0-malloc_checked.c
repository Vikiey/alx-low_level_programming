#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: unsigned int, number of bytes
 * Return: a pointer to the allocates memory
 */

void *malloc_checked(unsigned int b)
{
	void *pt = malloc(b);

	if (pt == NULL) /*if malloc fails, terminate with status 98*/
		exit(98);

	return (pt);
}
