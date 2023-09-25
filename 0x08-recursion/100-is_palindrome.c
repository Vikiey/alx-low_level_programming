#include "main.h"

/**
 * pali - assists the is_palindrome function
 * @str: string
 * Return: 1 if palindrome otherwise 0
 */

int pali(char *str, int a, int b)
{
	if (a >= 1)
		return (1);
	if (str[a] != str[b])
		return (0);
	return (str, a, b);
}

/**
 * _length - calculates the length if a string 
 * @st: string
 * Return: length of a string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (_length(s + 1) + 1);
}

/**
 * is_palindrome - checks for a palindrome i.e empty string
 * @s: input string
 * Return: 1 if palindrome otherwise 0
 */

int is_palindrome(char *s)
{
	int p;

	p = _length(p);
	if (p <= 1)
		return (1);
	return (pali(s, 0, p));
}
