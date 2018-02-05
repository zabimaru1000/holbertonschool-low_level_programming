#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: pointer to char array buffer.
 * @b: char value of buffer.
 * @n: unsigned integer value containing how many times to get value b.
 *
 * Description: declares an unsigned int to compare values to argument n.
 * Description (cont): From 0 to 94, char array becomes value contained in b.
 *
 * Return: s (contains the array value 0x01)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
