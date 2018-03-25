#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * argstostr - Returns number of program arguments
 * @ac: Int type storing number of arguments.
 * @av: Pointer to pointer of char
 *
 *
 * Return: mem (Allocated memory pointing to string arguments)
 */
char *argstostr(int ac, char **av)
{
	int i, total_len;
	char *mem;

	total_len = _strlen(*av);

	mem = malloc(sizeof(char *) * total_len + 1);

	if (ac == 0 || av == '\0')
		return ('\0');

	if (mem == '\0')
		return ('\0');


	for (i = 0; i < ac; i++)
	{
		mem = av[i];
		mem[i] = '\n';
	}

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
