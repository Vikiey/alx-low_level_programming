#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 * to uppercase
 * @s: string
 * Return: the string in uppercase
 */

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = ' ';
		s++;
	}
	return (s);
}
