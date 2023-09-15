#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(apv);
	unsigned int a;

	a = n;

	va_start(apv, n);

	if (a--)
		printf("%d", va_arg(apv, int));

	while (a-- > 0)
	{
		if (separator == NULL)
			printf("%d", va_arg(apv, int));
		else
			printf("%s%d", separator, va_arg(apv, int));
	}
	printf("\n");

	va_end(apv);
}
