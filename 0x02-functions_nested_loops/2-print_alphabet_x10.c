#include "holberton.h"

void print_alphabet_x10(void);

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
