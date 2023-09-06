#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid
 * @grid: pointer to pointer grid
 * @height: height of grid
 * Return: NULL if 0 or positive
 */

void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
		free(grid[d]);
	free(grid);
}
