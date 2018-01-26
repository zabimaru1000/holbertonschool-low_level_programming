#include "holberton.h"

/**
 * print_triangle - Prints a inverted right triangle in the terminal
 * @size: Parameter that takes the size of the triangle.
 *
 */
void print_triangle(int size)
{
	int in, out;

	if (size <= 0)
		_putchar('\n');

	else
		for (out = 1; out <= size; out++)
		{
			for (in = 1; in <= size; in++)
			{
				if (in <= size - out)
					_putchar(32);
				else
					_putchar('#');
			}
			_putchar('\n');
		}


}
