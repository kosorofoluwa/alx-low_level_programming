#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function.
 * @height: height of grid
 * @grid: grid
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	if (grid)
	{
		while (height > 0)
		{
			free(grid[height - 1]);
			height--;
		}
		free(grid);
	}
}
