#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index of the bit
 * Return: 1 if success or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	num <<= index;
	*n = *n | num;
	return (1);
}
