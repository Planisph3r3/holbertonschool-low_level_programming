#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees the 2 dimensional grid that was created
 * by alloc_grid
 *
 * @grid: The address of the array
 * @height: The height of the grid
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	while (i < height)
	{
	free(grid[i]);
	free(grid);
	i++;
	}
}
