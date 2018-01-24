#include "holberton.h"

int print_sign(int n);

/**
 * print_sign - Checks conditionals for integer and prints a character and int.
 *
 * @n: Parameter to be evaluated by if else conditionals.
 *
 *
 * Return: 1, 0, or -1 (returns ASCII value in n to main)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}

}
