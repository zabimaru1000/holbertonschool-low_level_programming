#include "holberton.h"
#include <string.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers on newly allocated memory.
 * @min: 1st value of array.
 * @max: Last value of array.
 *
 * Return: mem (Pointer to a certain amount of space in memory)
 */
int *array_range(int min, int max)
{
	int *mem, i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	mem = malloc(sizeof(int) * n);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		mem[i] = min;
		min++;
	}

	return (mem);
}
