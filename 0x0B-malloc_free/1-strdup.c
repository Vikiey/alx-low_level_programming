#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: type char string
 * Return: pointer to dup string or NULL if it fails or str is NULL
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++) /*calculate string length*/
		;

	dup = malloc(a + 1);

	if (dup == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		dup[b] = str[b]; /*copy str into dup string*/

	return (dup);
}
