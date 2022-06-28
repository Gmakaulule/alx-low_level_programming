#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free two dimetional grid
 * @grid : input two dimettinal array
 * @height: hight length
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
