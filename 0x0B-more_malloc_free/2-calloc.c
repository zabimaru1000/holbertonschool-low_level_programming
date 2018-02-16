#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array. Imitates the calloc function.
 * @nmemb: Unsigned int type representing elements of an array.
 * @size: Same data type representing number of bytes in memory.
 *
 *
 * Return: mem (Pointer to a certain amount of space in memory)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(sizeof(char) * size + nmemb);

	if (mem == 0)
		return (NULL);

	return (mem);

}
