#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list(ap);

	va_start(ap, n);
	str = va_arg(ap, char *);

	if (separator != NULL)
		printf("%s", str);
	for (x = 0; x < n; x++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s%s", separator, str);
		if (x < n - 1)
			printf("%s", str);
	}

	printf("\n");

	va_end(ap);
}
