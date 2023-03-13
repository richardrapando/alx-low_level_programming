#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: grid width
 * @height: grid height
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int gridheight, gridwidth;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (gridheight = 0; gridheight < height; gridheight++)
	{
		grid[gridheight] = malloc(sizeof(int) * width);

		if (grid[gridheight] == NULL)
		{
			for (; gridheight >= 0; gridheight--)
				free(grid[gridheight]);

			free(grid);
			return (NULL);
		}
	}

	for (gridheight = 0; gridheight < height; gridheight++)
	{
		for (gridwidth = 0; gridwidth < width; gridwidth++)
			grid[gridheight][gridwidth] = 0;
	}

	return (grid);
}
