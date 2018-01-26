#include "holberton.h"

/**
 * print_numbers - Prints numbers 0 to 9.
 *
 */
void print_numbers(void)
{
	int init;

	for (init = 0; init < 10; init++)
		_putchar(init + '0');
	_putchar('\n');

}
