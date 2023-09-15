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

	if (separator == NULL)
		separator = "";

	if (a--)
		printf("%d", va_arg(apv, int));

	while (a-- > 0)
		printf("%s%d", separator, va_arg(apv, int));

	printf("\n");

	va_end(apv);
}
