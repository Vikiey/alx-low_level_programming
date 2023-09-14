#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*func)(int, int);
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = argv[2][0];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	calc = func(num1, num2);
	printf("%d\n", calc);

	return (0);
}
