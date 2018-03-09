#include "holberton.h"

/**
 * get_bit - Returns value of bit at a position.
 * @n: Decimal to be printed
 * @index: Given position.
 * Return: 0 or 1 (Success), -1 (Fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index == 0)
		return (0);

	if (index > 0)
	{
		while (n > 0)
		{
			if ((n & 1) == 0)
				i = 0;

			else
				i = 1;

			n = n >> 1;
		}

		return (i);
	}

	return (-1);
}
