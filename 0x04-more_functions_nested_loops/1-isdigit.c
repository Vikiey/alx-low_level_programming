#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: integer value
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
