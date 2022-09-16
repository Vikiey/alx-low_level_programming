#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: finds and prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 612852475143;
	int b;

	for (b = 2; b <= sqrt(a); b++)
	{
		if (a % b == 0)
		{
			a = (a / b);
			b = 1;
		}
	}

	printf("%ld\n", a);
	return (0);
}
