#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: the number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int lst_digit = i % 10;

	_putchar(lst_digit + '0');
	_putchar('\n');
	return (lst_digit);
}
