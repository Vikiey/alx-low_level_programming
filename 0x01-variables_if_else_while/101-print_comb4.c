#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
