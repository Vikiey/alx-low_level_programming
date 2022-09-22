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
	int b = 0;

	while (a != n)
	{
		dest[b] = src[a];
		a++;
		b++;
		if (src[a] == '\0')
		{
			break;
		}
	}
	while (b != n)
	{
		dest[b++] = '\0';
	}
	return (dest);
}
