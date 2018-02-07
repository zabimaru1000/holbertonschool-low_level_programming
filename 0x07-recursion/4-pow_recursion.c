#include "holberton.h"

/**
 * _pow_recursion - Take an exponential through recursion.
 * @x: Parameter for base integer.
 * @y: Parameter for how many times base integer is multiplied.
 *
 * Description: Two base cases where if y is negative and y equals 0.
 * Description (cont): Recursively call function until y is 0.
 *
 * Return: -1, 1, x (x recursively calls function and subtracts 1 from y)
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
