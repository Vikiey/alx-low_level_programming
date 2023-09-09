#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int a, len;

	if (s1 == NULL)
		s1 = ""; /* treat NULL as emptry string */
	if (s2 == NULL)
		s2 = "";

	for (len = 0; s1[len] != '\0'; len++)
		;
	pt = malloc((len + n + 1) * sizeof(char));
	/* +1 is for null terminator */
	if (pt == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		pt[a] = s1[a];
	for (a = 0; a < n; a++)
		pt[len + a] = s2[a];

	pt[len + a] = '\0'; /*null terminate the concatenated string */
	return (pt);
}
