#include "holberton.h"

void jack_bauer(void);

/**
 * jack_bauer - Prints every second up to military time 23:59
 *
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int t, h, m, s;

	for (t = 0; t < 3; t++)
		if (t < 2)
			for (h = 0; h < 10; h++)
				for (m = 0; m < 6; m++)
					for (s = 0; s < 10; s++)
					{
						_putchar('0' + t);
						_putchar('0' + h);
						_putchar(':');
						_putchar('0' + m);
						_putchar('0' + s);
						_putchar('\n');
					}

		else
			for (h = 0; h < 4; h++)
				for (m = 0; m < 6; m++)
					for (s = 0; s < 10; s++)
					{
						_putchar('0' + t);
						_putchar('0' + h);
						_putchar(':');
						_putchar('0' + m);
						_putchar('0' + s);
						_putchar('\n');
					}

}
