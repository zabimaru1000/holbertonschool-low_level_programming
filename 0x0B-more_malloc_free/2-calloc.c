#include "holberton.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - Allocates memory for an array. Imitates the calloc function.
 * @nmemb: Unsigned int type representing elements of an array.
 * @size: Same data type representing number of bytes in memory.
 *
 * Return: mem (Pointer to a certain amount of space in memory)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(sizeof(char) * size * nmemb);

	if (mem == 0)
		return (NULL);

	return (_memset(mem, 0, size * nmemb));

}

/**
 * *_memset - Fills memory with a constant byte.
 * @s: pointer to char array buffer.
 * @b: char value of buffer.
 * @n: unsigned integer value containing how many times to get value b.
 *
 * Return: s (contains the array value 0x01)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
