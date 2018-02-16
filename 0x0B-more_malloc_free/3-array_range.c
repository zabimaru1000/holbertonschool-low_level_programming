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
	int *mem, i;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		;

	mem = malloc(sizeof(int) * i);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
