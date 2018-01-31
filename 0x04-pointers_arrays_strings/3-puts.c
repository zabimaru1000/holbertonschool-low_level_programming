#include "holberton.h"

/**
 * _puts - Imitates the std library puts function by printing a string.
 * @str: Pointer that has the memory address of str.
 *
 * Description: Takes a loop and loops the array until NULL is reached.
 * Description (cont): uses a custom putchar function to print the string.
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');

}
