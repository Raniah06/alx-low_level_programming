#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2 dimensional grid
 * @grid: double pointer to 2 dimensional grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
