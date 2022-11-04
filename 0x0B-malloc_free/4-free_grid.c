#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
