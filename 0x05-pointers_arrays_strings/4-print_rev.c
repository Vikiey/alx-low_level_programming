#include "main.h"

/**
 * print_rev a function that prints a string, in reverse
 * @s: pointer to the string
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0';)
		a++;
	for (a = a - 1; a >= 0;)
	{
		_putchar (s[a]);
		a--;
	}
	_putchar ('\n');
}
