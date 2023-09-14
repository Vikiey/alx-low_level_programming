#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: char str
 * Return: pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
