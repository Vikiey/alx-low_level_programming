#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: is the integer for the paramaters of my function
 * Return: a straight line
 */

void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
