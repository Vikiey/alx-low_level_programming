#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, u, y;
	char *concat;

	if (s1 == NULL)
		s1 = ""; /* if NULL treat as empty string */
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	/* len1 is s1 length, +1 is for null terminator */
	if (concat == NULL)
		return (NULL);

	for (u = 0; u < len1; u++)
		concat[u] = s1[u];
	for (y = 0; y < n; y++)
		concat[u + y] = s2[y];

	concat[u + y] = '\0';

	return (concat);
}
