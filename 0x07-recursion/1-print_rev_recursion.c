#include "holberton.h"

/**
 * _print_rev_recursion - Recursively reverses a string.
 * @s: Pointer to char array s.
 *
 * Description: Base case if array is NULL, then print newline and return
 * Description (cont): Initialize j to last character and print character/
 *
 */
void _print_rev_recursion(char *s)
{

	int i = 0, j;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	j = i - 1;

	_putchar(s[j]);

	_print_rev_recursion(&s[i + 1]);

}
