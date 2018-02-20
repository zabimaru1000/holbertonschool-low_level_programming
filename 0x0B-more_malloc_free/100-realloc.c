#include "holberton.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;

	ptr = malloc(old_size);

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
		for (j = 0; j < new_size && j < old_size; j++)
		{
			ptr = malloc(new_size);
		}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < new_size; i++)
		ptr = malloc(new_size);

	return (ptr);
}
