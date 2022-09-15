#include "main.h"
/**
 * _abs - it is a function that computes the absolute value of an integer
 * @a: integer input
 * Return: absolute value of a
 */

int _abs(int a)
{
	if (a < 0)
		return (a * (-1));
	else if (a == 0)
		return (0);
	else
		return (a);
}
