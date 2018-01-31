#include "holberton.h"

/**
 * puts2 - Takes a pointer to a string and only prints every 2 characters.
 * @str: Variable with datatype char that holds the string "0123456789"
 *
 * Description: Uses a for loop to print our array until NULL is reached.
 * Description (cont): Adds another iteration by 1 to print every 2 characters.
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i = i + 1;
	}

	_putchar('\n');

}
