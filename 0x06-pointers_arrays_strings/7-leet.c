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
		for (b = 0; b <= 9; b++)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
		}
	}
	return (s);
}
