#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a char pointer to a new memory allocation.
 * @str: Char pointer to "Holberton"
 *
 * Return: mem (Pointer to allocated memory in new_array set by size.)
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *cpy, *mem;

	for (i = 0; str[i] != '\0'; i++)
		cpy = str;

	mem = malloc(sizeof(char) * i + 1);
	mem = cpy;

	if (mem == '\0' || str == '\0')
		return ('\0');

	return (mem);
}
