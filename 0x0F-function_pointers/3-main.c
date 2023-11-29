#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: array of commmand line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char operator;
	int (*funct)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	funct = get_op_func(argv[2]);
	if (!funct)
	{
		printf("Error\n");
		exit(99);
	}

	calc = func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
