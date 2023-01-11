#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -free mem of 2D array
 * @grid: array pointer
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		free(grid);

	while (i < height)
		free(grid[i]);

	free(grid);
}
