#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: type int
 */

void print_times_table(int n)
{
	int a, b, mul;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			mul = a * b;

			if (b < n)
			{
				_putchar(',');
				_putchar(' ');

				if (mul < 10)
					_putchar(' ');
			}
			_putchar(mul / 10 + '0');
			_putchar(mul % 10 + '0');
		}
		_putchar('\n');
	}
}
