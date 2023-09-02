#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: type char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int numbcoins = sizeof(coins) / sizeof(coins[0]);
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (int a = 0; a < numbcoins; a++)
	{
		while (cents >= coins[a])
		{
			cents -= coins[a];
			change++;
		}
	}

	printf("%d\n", change);

	return (0);
}
