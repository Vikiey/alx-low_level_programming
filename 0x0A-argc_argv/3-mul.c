#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of characters
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the command-line arguments to integers  */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	prod = a * b;
	printf("%d\n", prod);

	return (0);
}
