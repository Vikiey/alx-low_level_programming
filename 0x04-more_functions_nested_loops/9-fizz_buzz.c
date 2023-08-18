#include <stdio.h>

/**
 * main - fizz buzz test
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("Fizzbuzz");
		else if (b % 3 == 0)
			printf("Fizz");
		else if (b % 5 == 0)
			printf("Buzz");
		else
			printf("%i", b);
		if (b < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
