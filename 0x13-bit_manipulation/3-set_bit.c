#include "holberton.h"

/**
 * set_bit - Sets value of bit at a position.
 * @n: Decimal to be printed
 * @index: Given position.
 * Return: 1 (Success), -1 (Fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 0)
	{
		*n |= (1 << index);
		return (1);
	}

	return (-1);
}
