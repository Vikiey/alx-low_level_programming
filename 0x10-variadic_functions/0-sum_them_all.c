#include "variadic_functions.h"

/**
 * sum_them_all - func that returns the sum of all its parameters
 * @n: a constant unsigned integer
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int sum = 0;

	va_list ap; /* argument pointer */

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
