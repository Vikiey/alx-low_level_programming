#include <stdio.h>

/**
 * main - fizz buzz test
 * Description: prints 1 to 100 then a new line
 * prints Fizz for multiples of 3, Buzz for multiples of 5
 * and prints Fizzbuzz for multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("FizzBuzz");
		else if (b % 3 == 0)
			printf("Fizz");
		else if (b % 5 == 0)
			printf("Buzz");
		else
			printf("%d", b);

		if (b < 100)
			printf(" ");
	}
		printf("\n");

	return (0);
}
