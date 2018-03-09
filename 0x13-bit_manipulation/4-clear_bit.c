#include "holberton.h"

/**
 * clear_bit - Sets value of bit to 0 at a position.
 * @n: Decimal to be printed
 * @index: Given position.
 * Return: 1 (Success), -1 (Fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 0)
	{
		*n &= ~(1 << index);
		return (1);
	}

	return (-1);
}
