#include "holberton.h"

/**
 * _sqrt_recursion - Takes a square root of a number..
 * @n: Parameter that is a integer to be checked.
 *
 * Description: 2 base case checks if n is negative or 0.
 * Description (cont): If not 1 or 0, gets the square root.
 *
 * Return: -1, 1, n (-1 if not natural, 0 if 0, or n if square rooted)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (n * _sqrt_recursion(n - 1));
}
