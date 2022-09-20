#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: pointer to the string to print
 * Return: string
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0';)
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
