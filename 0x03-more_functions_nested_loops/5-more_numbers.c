#include "holberton.h"

/**
 * more_numbers - Prints 0 to 14 ten times.
 *
 */
void more_numbers(void)
{
	int tens, ones;

	for (ones = 0; ones < 11; ones++)
	{
		for (tens = 0; tens < 15; tens++)
		{
			if (tens > 9)
				_putchar('0' + tens / 10);

			_putchar('0' + tens % 10);
		}
		_putchar('\n');
	}
}
