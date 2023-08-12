#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
