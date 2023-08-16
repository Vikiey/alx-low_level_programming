#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @b: the number to start counting from
 * Return: 0 (success)
 */

void print_to_98(int b)
{
	while (b < 98)
	{
		printf("%i, ", b);
		b++;
	}
	while (b > 98)
	{
		printf("%i, ", b);
		b--;
	}
	printf("98");
	putchar('\n');
}
