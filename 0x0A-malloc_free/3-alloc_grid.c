#include "holberton.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return ('\0');

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return ('\0');

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return ('\0');
		for (j = 0; j < width; j++)
			grid[height][width] = 0;
	}

	return (grid);
}
