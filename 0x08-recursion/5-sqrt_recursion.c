#include "main.h"

/**
 * _func - assists _sqrt_recursion
 * @a: number to find square root of
 * @b: integer
 * Return: natural square root
 */

int _func(int a, int b)
{
	int n;

	n = b * b;

	if (n == a)
		return (b);
	else if (n < a)
		return (_func(a, b + 1)); /*increase b and continue*/
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n:number
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	return (_func(n, 1));
}
