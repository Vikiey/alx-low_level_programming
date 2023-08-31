#include "main.h"

/**
 * _strlen_recursion - funcion that returns the length of a string
 * @s: char string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
