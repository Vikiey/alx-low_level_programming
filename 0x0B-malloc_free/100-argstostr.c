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
	int x, y;
	char *concat;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++; /* calc total len of string */
	}

	concat = malloc(sizeof(char) * len + 1);
	if (concat == NULL)
		return (NULL);
}
