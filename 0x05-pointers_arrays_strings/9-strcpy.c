#include"main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: a pointer to the string we are copying to
 * @src: a pointer to the string we are copying from
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
