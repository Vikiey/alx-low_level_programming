#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @b: constant byte
 * @n: number of bytes
 * @s: pointer to the memory area
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
