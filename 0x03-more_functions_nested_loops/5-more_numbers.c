#include "holberton.h"

/**
 * more_numbers - Prints 0 to 14 ten times.
 *
 */
void more_numbers(void)
{
	int tens, out, change;

	for (out = 0; out < 11; out++)
	{
		for (tens = 0; tens < 15; tens++)
		{

			if (tens > 9 && tens < 15)
			{
				change = 10;
				_putchar('0' + 1);
				_putchar('0' + (tens - change));
			}
			else
				_putchar('0' + tens);


		}
		_putchar('\n');
	}
}
