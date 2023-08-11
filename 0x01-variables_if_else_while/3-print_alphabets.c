#include <stdio.h>

/**
 * main - prints in lowercase then uppercase
 * Return: 0 (success)
 */

int main(void)
{
	char alphalow, alphaup;

	for (alphalow = 'a'; alphalow <= 'z'; alphalow++)
		putchar(alphalow);
	for (alphaup = 'A'; alphaup <= 'Z'; alphaup++)
		putchar(alphaup);
	putchar('\n');
	return (0);
}
