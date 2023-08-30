#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: type char
 * @accept: type char
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int a = 0;
	int b, c;

	while (s[a] != '\0')
	{
		b = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
				b = 1;
		}
		c = 0;
		if (b == 0)
			break;
		num++;
		a++;
	}
	return (a);
}
