#include "main.h"
#include<stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer to the duplicated str or NULL if str = NULL or malloc fails
 */

char *_strdup(char *str)
{
	unsigned int len, s;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++) /* string length */
		;

	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	for (s = 0; s <= len; s++)
		dup[s] = str[s]; /* copy str into dup */

	return (dup);
}
