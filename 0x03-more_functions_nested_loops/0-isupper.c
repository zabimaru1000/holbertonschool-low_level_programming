#include "holberton.h"

/**
 * _isupper - Checks ASCII value if it is upper or lower case.
 *
 * @c: Parameter to be evaluated by if else conditionals.
 *
 *
 * Return: 1 or 0 (returns ASCII value in n to main)
 */
int _isupper(int c)
{
	if (c == 65 || c <= 90)
		return (1);

	else
		return (0);
}
