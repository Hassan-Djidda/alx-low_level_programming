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
	int **grid_int, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_int = malloc(height * sizeof(int *));
	if (grid_int == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_int[i] = malloc(width * sizeof(int));
		if (grid_int[i] == NULL)
		{
			if (i >= 0)
			{
				free(grid_int[i]);
				i--;
			}
			free(grid_int);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid_int[i][j] = 0;
	}

	return (grid_int);
}
