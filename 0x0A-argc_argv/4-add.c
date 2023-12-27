#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	if (argc == 1)
		printf("0");

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{/* checks for digits */
			if (!(argv[a][b] >=  0 && argv[a][b] <= 9))
			{
			printf("Error\n");
			return (1);
			}
		}
	}

	sum += atoi(argv[a]);
	printf("%d\n", sum);

	return (0);
}
