#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Makes an array of characters that only uses char c.
 * @size: Any int value that used as an argument from main.
 * @c: Any char value that is used as an argument from main.
 *
 * Return: new_array (Pointer to allocated memory in new_array set by size.)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_array;

	new_array = malloc(sizeof(char) * size);

	if (new_array == '\0' || size == 0)
		return ('\0');

	for (i = 0; i < size; i++)
		new_array[i] = c;

	return (new_array);
}
