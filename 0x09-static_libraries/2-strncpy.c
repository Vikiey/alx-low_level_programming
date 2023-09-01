#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: char string
 * @src: char string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	/* copies up to "n" characters or '\0' */
	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];

	/* if n > length of src add null byte to fipl dest string */
	for (; p < n; p++)
		dest[p] = '\0';

	return (dest);
}
