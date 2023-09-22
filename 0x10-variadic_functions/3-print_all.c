#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char *st;
	int a = 0;

	va_list apv;

	va_start(apv, format);

	while (format != NULL && format[a] != '\0')
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(apv, int));
				break;
			case 'i':
				printf("%d", va_arg(apv, int));
				break;
			case 'f':
				printf("%f", va_arg(apv, double));
				break;
			case 's':
				st = va_arg(apv, char*);
				if (st == NULL)
					printf("(nil)");
				else
					printf("%s", st);
				break;
		}
		if (*format)
			printf(", ");
	}
	printf("\n");

	va_end(apv);
}
