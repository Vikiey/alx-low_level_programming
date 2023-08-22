#include "main.h"
#include <stdio.h>

/**
 * rev_string - afunction that reverses a string
 * @s: pointer to char string
 */

void rev_string(char *s)
{;
	int b = 0;
	int c, d;

	for (c = 0; s[c] != 0; c++)
	{
	}
	c = c - 1;
	while (b < c)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
		b++;
		c--;
	}
}
