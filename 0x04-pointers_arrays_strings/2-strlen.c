#include "holberton.h"

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
