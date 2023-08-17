#include <stdio.h>

/**
 * main - prints fibonacci
 * Return: 0
 */

int main(void)
{
	unsigned long a = 0, n = 1, b = 0, sum = 0;

	while (b <= 4000000)
	{
		b = a + n;
		a = n;
		n = b;

		if ((a % 2) == 0)
			sum += a;
	}

	printf("%ld\n", sum);
	return (0);
}
