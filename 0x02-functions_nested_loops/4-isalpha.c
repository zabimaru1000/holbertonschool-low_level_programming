#include "holberton.h"

int _isalpha(int c);

/**
 * _isalpha - Evaluates if ASCII character is lower or uppercase.
 * @c: Integer to be checked as an ASCII value.
 * Description: Uses if else conditional to check c.
 * Return: 0 or 1 (Conditional)
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
		return (1);

	else
		return (0);

}
