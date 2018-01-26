#include "holberton.h"

/**
 * print_line - Prints a straight line.
 *
 * @n: Takes an int argument from main.
 */
void print_line(int n)
{
	int n1;

	if (n > 0)
	{
		for (n1 = 0; n1 < n; n1++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
