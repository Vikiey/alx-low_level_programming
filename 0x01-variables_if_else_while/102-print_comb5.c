#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			putchar(' ');

			for (c = 0; c <= 9; c++)
			{
				for (d = a + 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(d + '0');

					if (a < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
