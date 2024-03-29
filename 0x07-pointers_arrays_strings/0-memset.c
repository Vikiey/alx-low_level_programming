#include "main.h"
#include <stdio.h>

/**
 * *_memset - a function that fills memory with a constant byte
 * @b: constant char byte
 * @n: number of bytes
 * @s: type char pointer array
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
