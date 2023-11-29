#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc == 1)
		printf("0");
	if (a < 0 || a > 9)
	{
		printf("Error\n");
		return (1);
	}

	sum += atoi(argv[a]);
	printf("%d\n", sum);

	return (0);
}
