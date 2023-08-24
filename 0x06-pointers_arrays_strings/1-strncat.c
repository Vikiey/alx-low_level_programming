#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: char string
 * @src: char string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int len = 0;

	while (dest[len] != '\0')
		len++;
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[len + a] = src[a];
	dest[len + a] = '\0';

	return (0);
}
