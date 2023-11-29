#include "3-calc.h"

/**
 * *get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op)
	/* iterates through the operators until a
	 * matching operator is found or end of array */
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		/* checks if the current operator matches the operator
		 * provided and that the operator is a single char*/
			return (ops[i].f); /* returns the associated function pointer */
		i++;
	}

	return (NULL);
}
