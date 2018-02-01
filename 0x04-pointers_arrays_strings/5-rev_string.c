#include "holberton.h"

/**
 * rev_string - Reverses a string through string sorting.
 * @s: pointer that points to memory address to str.
 *
 * Description: Goes through a loop to count value of string array.
 * Description (cont): Takes last index value and sorts indexes in a loop.
 *
 */
void rev_string(char *s)
{
	int inc, dec, dummy;

	for (dec = 0; s[dec] != '\0'; dec++)
	;

	dec--;
	for (inc = 0; inc <= 0; dec--)
	{
		dummy = s[inc];
		s[inc] = s[dec];
		s[dec] = dummy;
		inc++;
	}
}
