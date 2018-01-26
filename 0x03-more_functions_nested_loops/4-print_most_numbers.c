#include "holberton.h"

/**
 * print_most_numbers - Prints 0 to 9 except for 2 and 4.
 *
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		if ((num == 1 || num == 3) || (num >= 5))
			_putchar(num + '0');
	_putchar('\n');
}
