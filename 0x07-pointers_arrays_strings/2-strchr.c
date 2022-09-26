#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: string used to locate a character
 * @c: character input to locate in s
 * Return: a pointer to the first occurrence of char c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
