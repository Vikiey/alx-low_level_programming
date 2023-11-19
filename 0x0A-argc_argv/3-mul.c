#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int x, y, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* convert the arguments to integers */
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	prod = x * y;
	printf("%d\n", prod);

	return(0);
}
