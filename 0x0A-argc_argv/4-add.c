#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: digit
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

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
		{
			if (!_isdigit(argv[a][b]))
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
