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

	int i = 0;

	if (s[i] == '\0')
		return;

	if (s[i] != '\0')
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]);
	}

}
