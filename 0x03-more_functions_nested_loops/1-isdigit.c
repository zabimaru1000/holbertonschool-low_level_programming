#include "holberton.h"

/**
 * _islower - Checks ASCII value if it is a digit.
 *
 * @c: Parameter to be evaluated by if else conditionals.
 *
 *
 * Return: 1 or 0 (returns ASCII value in n to main)
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
