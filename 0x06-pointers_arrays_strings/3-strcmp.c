#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between their ASCII values
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' && s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
	}
}
