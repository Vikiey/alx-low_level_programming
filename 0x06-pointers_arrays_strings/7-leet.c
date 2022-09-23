#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: an input string to encode
 * Return: the resulting string
 */

char *leet(char *s)
{
	int a, b;

	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (d = 0; d <= 9; d++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
		}
	}
	return (0);
}
