#include "holberton.h"

/**
 * print_binary - Prints binary version of a decimal
 * @n: Decimal to be printed.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');

		n = n >> 1;
	}

}
