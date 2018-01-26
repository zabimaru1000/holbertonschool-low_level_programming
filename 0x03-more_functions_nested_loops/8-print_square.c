#include "holberton.h"

/**
 * print_square - Prints a square in the terminal
 * @size: Parameter that takes the size of the square.
 *
 */
void print_square(int size)
{
	int in, out;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (out = 1; out <= size; out++)
		{
			for (in = 1; in <= size; in++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
