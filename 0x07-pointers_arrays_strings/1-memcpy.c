#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes
 * @src: copy from
 * @dest: copy to
 * Return: a poineter to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
