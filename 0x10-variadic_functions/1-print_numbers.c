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

	for (a = 0; a < n; a++)
	{
		if (a == n - 1)
		{
			printf("%d\n", va_arg(apv, int));
			break;
		}
		else
		{
			if (separator == NULL)
				printf("%d", va_arg(apv, int));
			else
				printf("%d%s", va_arg(apv, int), separator);
		}
	}

	va_end(apv);
}
