#include "holberton.h"

int _islower(int c);


/**
 * _islower - Evaluates if ASCII character is lower or uppercase.
 * @c: Integer to be checked as an ASCII value.
 * Description: Uses if else conditional to check c.
 * Return: 0 or 1 (Conditional)
 *
 */
int _islower(int c)
{
	if (c < 91)
		c = 0;
	else
		c = 1;

	return (c);
}
