#include "holberton.h"

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - Loops a character starting with 'a' and prints until z.
 *
 * Nested for loop that prints the alphabet 10 times.
 */
void print_alphabet_x10(void)
{
	int loop;
	char alpha;

	for (loop = 0; loop < 10; loop++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
