#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 * Return: 0 (success)
 */

int main(void)
{
	int a[100];
	int b, c, sum;

	sum = 0;

	srand(time(NULL));

	for (b = 0; b < 100; b++)
	{
		a[b] = rand() % 78;
		sum += (a[b] + '0');
		putchar(a[b] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			c = 2772 - sum - '0';
			sum += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
