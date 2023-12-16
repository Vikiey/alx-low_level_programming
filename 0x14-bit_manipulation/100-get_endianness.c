#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 1;
	char *y;

	y = (char *)&x;

	if (*y == 0)
		return (0);
	else
		return (1);
}
