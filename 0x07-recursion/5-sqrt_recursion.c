#include "holberton.h"


int inverse_pow(int n, int x);

/**
 * _sqrt_recursion - Takes a square root of a number..
 * @n: Parameter that is a integer to be checked.
 *
 * Description: 2 base case checks if n is negative or 0.
 * Description (cont): If not 1 or 0, gets the square root.
 *
 * Return: -1, 1, 0 (-1 if not natural, 0 if 0, 1 if 1, or inverse_pow)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	if (n == 0)
		return (0);

	return (inverse_pow(n, 2));
}

/**
 * inverse_pow - Takes result of exponential operation inverse to sqrt.
 * @n: Parameter checked to get square root.
 * @x: Parameter that results in n if multiplied by itself. The square root.
 *
 * Description: 2 base case checks if n does not have natural square root.
 * Description (cont): Other base case check is if x*x is equal to n.
 *
 * Return: -1, x (-1 if not natural, x if natural sqrt)
 */
int inverse_pow(int n, int x)
{
	if (n == x * x)
		return (x);

	if (n < x * x)
		return (-1);

	return (inverse_pow(n, x + 1));
}
