#include "holberton.h"

/**
 * _puts_recursion - Uses recursion instead of loops to print a string.
 * @s: Pointer to char array s.
 *
 * Description: Initializes integer i to 0. And checks base case if array ends.
 * Description (cont): If s is not NULL, print char and recursively call itself
 * Description (cont): Adds 1 to i every time recursion happens until NULL.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);

	if (s[i] != '\0')
		_puts_recursion(&s[i + 1]);

}
