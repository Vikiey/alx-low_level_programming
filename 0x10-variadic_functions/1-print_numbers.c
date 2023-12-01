#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;

	va_list(ap);

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		if (x == n - 1)
			printf("%d", va_arg(ap, int));
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}

	printf("\n");
	va_end(ap);
}
