#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory for any amount of bytes in b.
 * @b: Int type containing number of bytes.
 *
 * Return: mem (Pointer to allocated memory)
 */
void *malloc_checked(unsigned int b)
{
	unsigned long int *mem;

	mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
