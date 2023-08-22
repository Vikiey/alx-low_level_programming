#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer
 */

void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != 0; a++)
		;

	b = (a + 1) / 2;

	for (; str[b] != 0; a++)
		_putchar(str[b]);
	_putchar('\n');
}
