#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program  that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, cents;
	int coins[] = {25, 10, 5, 2, 1};
	int c = 0;
	int num = sizeof(coins) / sizeof(coins[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < num; x++)
	{
		while (cents >= coins[x])
		{
			cents -= coins[x];
			c++;
		}
	}
	printf("%d\n", c);

	return (0);
}
