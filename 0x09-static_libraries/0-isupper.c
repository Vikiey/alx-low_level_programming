#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: integer value
 * Return: 1 if uppercse, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
