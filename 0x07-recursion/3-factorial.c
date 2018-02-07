#include "holberton.h"

/**
 * factorial - Textbook example of using recursion through factorials.
 * @n: Parameter of given number that is used for factoring.
 *
 * Description: Two base cases where if n is negative and n gets to 1.
 * Description (cont): Otherwise, keep getting the factorial.
 *
 * Return: -1, 1, n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);


	if (n == 1)
		return (1);

	return (n * (factorial(n - 1)));


}
