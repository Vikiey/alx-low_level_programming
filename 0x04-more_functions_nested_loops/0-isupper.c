#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: integer value
 * Return: 1 if uppercse, otherwise 0
 */

int _isupper(int c)
{
	c = 65;

	if (c <= 90)
	{
		c++;
		return (1);
	}
	else
		return (0);
}
