#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer to the string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0';)
		a++;

	return (a);
}
