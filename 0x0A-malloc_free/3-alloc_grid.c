#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2D int array.
 * @width: Size of row in 2D array.
 * @height: Size of column in 2D array.
 *
 * Return: grid (Initalized value in array that's on the allocated memory)
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return ('\0');

	if (grid == NULL)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
			return ('\0');

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
