#include <stdio.h>

/**
 * op_sum - adds a and b
 * @a: type int
 * @b: type int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prints the difference between two numbers
 * @a: type int
 * @b: type int
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: type int
 * @b: type int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: int
 * @b: int
 * Return: quotient of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a divided by b
 * @a: int
 * @b: int
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
