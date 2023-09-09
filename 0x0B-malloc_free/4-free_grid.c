#include <stdlib.h>

/**
 * free_grid - free the allocated memory of a grid
 *
 * @grid: the 2d grid to free
 * @height: the height of the 2d grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
