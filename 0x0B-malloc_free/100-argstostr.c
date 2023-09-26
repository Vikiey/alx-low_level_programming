#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *cate;
	int a, b, len;
	int point = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++; /*calculates the total length */
	}

	cate = malloc(len + 1);

	if (cate == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			cate[point++] = av[a][b];
		cate[point++] = '\n';
	}
	cate[len] = '\0';

	return (cate);
}
