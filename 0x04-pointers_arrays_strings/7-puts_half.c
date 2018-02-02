#include "holberton.h"

int _strlen(char *str);

/**
 * puts_half - Prints half of a string with a new line.
 * @str: pointer to mem address to str.
 *
 * Description: Recalls the strlen function and assigns it to an integer.
 * Description (cont): Integer goes in conditional to start at half the string.
 *
 */
void puts_half(char *str)
{
	int i, length = _strlen(str);

	if (length % 2 != 0)
		i = (length + 1) / 2;
	else if (length % 2 == 0)
		i = length / 2;

	for (i = i; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
 * _strlen - Counts the length of a string
 * @str: pointer with address variable from str.
 *
 * Description: Loops an integer inside an array until it reaches NULL.
 * Description (cont): Array contains the string contained in "str."
 *
 * Return: i (An integer contained as an index in an array)
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}
