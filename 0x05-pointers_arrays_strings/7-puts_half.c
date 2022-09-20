#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: a pointer to the string
 * Return: half of a string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
		i++;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
