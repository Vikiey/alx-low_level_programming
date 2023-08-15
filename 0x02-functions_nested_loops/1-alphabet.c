#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase then a new line
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 97; lower <= 122; lower++)
		_putchar(lower);
	_putchar('\n');
}
