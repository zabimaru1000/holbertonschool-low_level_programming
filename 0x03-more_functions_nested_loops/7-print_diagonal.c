#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line
 *
 */
void print_diagonal(int n)
{
	int out, in;

	if (n <= 0)
		_putchar('\n');

	else
		for (out = 1; out <= n; out++)
		{
			for (in = 1; in <= n; in++)
			{
				if (in == out)
					_putchar('\\');
				else if (out > in)
					_putchar(32);
			}
			_putchar('\n');


		}
}
