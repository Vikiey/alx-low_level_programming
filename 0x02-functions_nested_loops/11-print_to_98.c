#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - it is a function that prints all natural numbers from n to 98
 * numbers are printed in order
 * numbers are separated by a comma, followed by a space
 * @n: the number to start counting from
 * Return: natural numbers from n to 98
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n++);
			printf("%d\n", n);
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n--);
			printf("%d\n", n);
		}
	}
}
