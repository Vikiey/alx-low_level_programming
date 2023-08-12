#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 100; a++)
	{
		for (b = a; b < 100; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');

			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
