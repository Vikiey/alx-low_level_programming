#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 10; i < 100; i++){
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}