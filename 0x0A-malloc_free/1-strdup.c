#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strdup - Returns a char pointer to a new memory allocation.
 * @str: Char pointer to "Holberton"
 *
 * Return: mem (Pointer to allocated memory in new_array set by size.)
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *mem;

	if (str == '\0')
		return ('\0');

	mem = malloc(sizeof(char) * _strlen(str) + 1);

	if (mem == '\0')
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		mem[i] = str[i];

	mem[i] = '\0';

	return (mem);
}

/**
 * _strlen - Returns an integer inside an array
 * @s: pointer with address variable from str.
 *
 * Description: Loops an integer inside an array until it reaches NULL.
 * Description (cont): Array contains the string "Holberton!"
 *
 * Return: init (An integer contained in an array)
 */
int _strlen(char *s)
{
	int init;

	for (init = 0; s[init] != '\0'; init++)
	{
	}

	return (init);
}
