#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, flip = n ^ m;

	while (flip != 0)
	{
		num += flip & 1;
		flip >>= 1;
	}
	return (num);
}
