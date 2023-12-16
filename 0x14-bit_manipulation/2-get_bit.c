#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @index: the index, starting from 0 of the bit you want to get
 * @n: number
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value = n >> index;
	/* shifts the bits of n by the specified index */

	if (index >= (sizeof(n) * 8))
		return (-1);
	/* checks if index is greater or equal to bits */

	return (value & 1);
}
