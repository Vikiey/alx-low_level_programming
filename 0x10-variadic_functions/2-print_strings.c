#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(apv);
	unsigned int b;

	va_start(apv, int);

	for (b = 0; b < n; b++)
	{
		arg = va_arg(apv, char *);

		if (st == NULL)
			printf("(nil)");
	}
	printf("\n");

	va_end(apv);
}
