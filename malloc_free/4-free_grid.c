#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a grid of integers.
 * @grid: The grid to free.
 * @height: The height of the grid to free.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}

	free(grid);
}
