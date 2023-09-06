#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: type int
 * @height: type int
 * Return: NULL on failure or if 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL); /*if memory allocation fails*/

	for (a = 0; a < height; a++) /*allocate memory for each row*/
	{
		grid[a] = malloc(width * sizeof(**grid));
		if (grid[a] == NULL)
		{ /* free allocated memory */
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL); /* if memory alloc fails */
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
