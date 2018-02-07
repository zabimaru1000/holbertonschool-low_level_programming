#include "holberton.h"

/**
 * _strlen_recursion - Recursively counts string length.
 * @s: Pointer to char array s.
 *
 * Description: Base case is if the string is not NULL.
 * Description (cont): Adds 1 to i every time recursion happens.
 *
 * Return: i (Integer value containing number of char)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		_strlen_recursion(&s[i + 1]);
	}

	return (i);
}
