#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @size: bytes size
 * @nmemb: elements number in array
 * Return: NULL fails or if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	char *st;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);
	st = (char *)pt;
	for (a = 0; a < (nmemb * size); a++)
		st[a] = 0;

	return (pt);
}
