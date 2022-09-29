#include "main.h"
int squareroot(int a, int b)
/**
 * _sqrt_recursion - a function that returns the natural square root
 * of a number
 * @n: integer input
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - finds square root
 * @a: input
 * @b: counter
 * Return: the square root
 */

int squareroot(int a, int b)
{
	if (b < 1)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (squareroot(a, b - 1));
}
