#include <stdlib.h>

/**
 * alloc_grid - returns 2 dimensional array of integer
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: NULL if width, height < 0
 */

int **alloc_grid(int width, int height)
{
	int grid_el = 0, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_array = malloc(height * sizeof(int *));
	if (grid_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			if (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = grid_el;
	}

	return (grid);
}
