#include "holberton.h"

/**
 * get_bit - Returns value of bit at a position.
 * @n: Decimal to be printed
 * @index: Given position.
 * Return: 0 or 1 (Success), -1 (Fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, bit;

	i <<= index;

	if (index < (sizeof(unsigned long int) * 8))
	{
		if ((i & n) == 0)
			bit = 0;

		else
			bit = 1;

		return (bit);
	}

	return (-1);
}
