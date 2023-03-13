#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  function that splits a string into words.
 * @grid: nested array of integers.
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int number;

	for (number = 0; number < height; number++)
		free(grid[number]);

	free(grid);
}
