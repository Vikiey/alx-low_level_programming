#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char ten, al;

	for (ten = 0; ten < 10; ten++)
	{
		for (al = 97; al <= 122; al++)
			_putchar(al);
		_putchar('\n');
	}
}
