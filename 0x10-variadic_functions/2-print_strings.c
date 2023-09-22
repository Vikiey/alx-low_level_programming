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
	char *st;

	va_start(apv, n);
	st = va_arg(apv, char *);

	for (b = 0; b < n; b++)
	{
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (separator != NULL && b < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(apv);
}
