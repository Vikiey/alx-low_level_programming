#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string
 * @accept: parameter for char
 * Return: number of bytes;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int b, c, d;

	b = 0;
	while (s[b] != '\0')
	{
		d = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
				d = 1;
		}
		c = 0;
		if (d == 0)
			break;
		a++;
		b++;
	}
	return (b);
}
