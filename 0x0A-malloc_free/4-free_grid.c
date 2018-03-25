#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees up memory from a 2D array, evaluated from alloc_grid.
 * @grid: Pointer to a pointer to int.
 * @height: Variable that is the same value as height in alloc_grid.
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
