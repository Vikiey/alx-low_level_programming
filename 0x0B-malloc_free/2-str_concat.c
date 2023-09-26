#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	concat = malloc(sizeof(char) * (a + b + 1));

	if (concat == NULL)
		returb (NULL);

	for (c = 0; c < a; c++)
		concat[c] = s1[c];
	for (d = 0; d < b; d++)
		concat[c + d] = s2[d];
	concat[c + d] = '\0';

	return (concat);
}
