#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer to char string
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int sign = 1;

	while (s[a] == ' ')
		a++;
	if (s[a] == '-')
	{
		sign *= -1;
		a++;
	}
	else if (s[a] == '+')
		a++;
	while (s[a] >= '0' && s[a] <= 9)
	{
		b = b * 10 + (s[a] - '0');
		a++;
	}

	return (b * a);
}
