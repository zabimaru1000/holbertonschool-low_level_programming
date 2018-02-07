#include "holberton.h"

/**
 * is_prime_number - Determine what is a prime number.
 * @n: Parameter that is a integer to be checked.
 *
 * Description: 1st base case checks if n is 1 or 0.
 * Description (cont): If not 1 or 0, checks if two remainders are 0.
 *
 * Return: 1 or 0 (1 if prime, 0 if not)
 */
int is_prime_number(int n)
{

	if (n == 1 || n == 0)
		return (0);

	if (n % 1 == 0 && n % n == 0)
	{
		return (0);
	}

	is_prime_number(--n);

	return (1);

}
