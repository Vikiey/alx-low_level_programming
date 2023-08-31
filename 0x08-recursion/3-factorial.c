#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: type int
 * Return: -1 if n < 0 and 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
