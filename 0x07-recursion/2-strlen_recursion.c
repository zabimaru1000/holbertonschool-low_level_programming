#include "holberton.h"

/**
 * _strlen_recursion - Recursively counts string length.
 * @s: Pointer to char array s.
 *
 * Description: Base case is if the string is not NULL.
 * Description (cont): Adds 1 to the function every time recursion happens.
 *
 * Return: itself or 0 (0 if no string or recalls function and adds 1)
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
		return (_strlen_recursion(&s[i + 1]) + 1);

	return (0);
}
