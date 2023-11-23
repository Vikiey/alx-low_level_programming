#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated sting or NULL if malloc fails
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, a, b;
	char *concat;

	if (s1 == NULL)
		s1 = ""; /* s1 is an empty string */
	if (s2 == NULL)
		s2 = ""; /* s2 is an empty string */

	for (len1 = 0; s1[len1] != '\0'; len1++) /* length of s1 */
		;
	for (len2 = 0; s2[len2] != '\0'; len2++) /* length of s2 */
		;

	/* memory alloc for a string with contents of s1, s2 and null terminator */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL); /* if malloc fails */

	for (a = 0; a < len1; a++)
		concat[a] = s1[a];
	for (b = 0; b < len2; b++)
		concat[a + b] = s2[b]; /* concatenates s1 & s2 */
	concat[a + b] = '\0'; /* null terminates the concatenated string */

	return (concat);
}
