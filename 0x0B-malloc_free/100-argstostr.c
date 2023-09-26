#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of characters
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *cate;
	int a, b;
	int point = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++; /*calculates the total length */
		len++;
	}
	len++;

	cate = malloc(sizeof(char) * len + 1);

	if (cate == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			if (point < len)
				cate[point++] = av[a][b];
		}
		cate[point++] = '\n';
	}
	cate[point] = '\0';

	return (cate);
}
