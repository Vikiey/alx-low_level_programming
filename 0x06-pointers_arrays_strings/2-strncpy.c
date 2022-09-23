#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: parameter to copy to
 * @src: parameter to copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
