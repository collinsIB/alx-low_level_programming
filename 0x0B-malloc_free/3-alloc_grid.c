#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * each element of the grid should be initialized to 0
 * the function should return NULL on failure
 * @width: input value
 * @height: input value
 *
 * Return: NULL If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return(NULL);
	for (w = 0; w < height; w++)
	{
		grid[w] = malloc(sizeof(int) * width);
		if (grid[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
		for (h = 0; h < width; h++)
			grid[w][h] = 0;
	return (grid);
}
