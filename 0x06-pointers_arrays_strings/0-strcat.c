#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (a = 0; src[a] != '\0'; a++)
		dest[len + a] = src[a];
	dest[len + a] = '\0';

	return (dest);
}
