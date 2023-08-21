#include "main.h"
#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: integer parameter
 * Return: 0
 */

void reset_to_98(int *n)
{
	int a = 402;

	n = &a;
	*n = 98;
}
