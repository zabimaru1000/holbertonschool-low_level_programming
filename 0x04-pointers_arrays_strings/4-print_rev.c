#include "holberton.h"

/**
 * print_rev - Prints a array string in reverse
 * @s: pointer with address variable from str.
 *
 * Description: Loops integer i as array element until it reaches NULL.
 * Description (cont): Integer i is the last element and iterates down to 0;
 *
 */
void print_rev(char *s)
{
        int i, j;

        for (i= 0; s[i] != '\0'; i++)
	;

	j = i - 1;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);

        _putchar('\n');

}
