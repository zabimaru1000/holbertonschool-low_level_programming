#include "holberton.h"

void times_table(void);

/**
 * times_table - Prints a multiplation table up to 9.
 *
 * Description: Uses _putchar and for loops to print ASCII characters.
 */
void times_table(void)
{
	int tens, ones, result;

	for (tens = 0; tens < 10; tens++)
	{
		for (ones = 0; ones < 10; ones++)
		{
			result = tens * ones;

			if (result < 10)
			{
				if (ones != 0)
					_putchar(' ');

				_putchar(result + '0');
				if (ones != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (ones != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}
}
