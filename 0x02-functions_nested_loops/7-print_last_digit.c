#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: the number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int lst_digit = i % 10;

	if (lst_digit < 0)
		lst_digit *= -1;

	_putchar(lst_digit + '0');
	return (lst_digit);
}
