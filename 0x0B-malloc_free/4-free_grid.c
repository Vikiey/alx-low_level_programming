#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid
 * @grid: address of the 2 dimensional grid
 * @height: height of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
		free(grid[g]);
	free(grid);
}
