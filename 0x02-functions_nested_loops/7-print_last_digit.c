#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: the number
 * Return: value of last digit
 */

int print_last_digit(int i)
{
	int lst_digit = i % 10;

	printf("%d\n", lst_digit);
	return (lst_digit);
}
