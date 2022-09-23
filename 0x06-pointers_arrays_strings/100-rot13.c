#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		while ((s[a] >= 'a' && s[a] <= 'z') ||
				(s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'a' && s[a] <= 'm') ||
					(s[a] >= 'A' && s[a] <= 'M'))
				s[a] += 13;
			else
				s[a] -= 13;
			a++;
		}
		a++;
	}
	return (s);
}
