#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @a: integer value
 * Return: a if positive and -1 * a if a is negative
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-1 * a);
}
