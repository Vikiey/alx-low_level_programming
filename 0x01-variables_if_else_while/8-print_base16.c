#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	while (num < 16)
	{
		if (num <= 9)
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
		num++;
	}
	putchar('\n');
	return (0);
}
