#include "holberton.h"

/**
 * flip_bits - Returns number of bits need to flip.
 * @n: Decimal 1
 * @m: Decimal 2
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0;

	n ^= m;

	while (n > 0)
	{
		bits += n & 1;
		n >>= 1;
	}

	return (bits);
}
