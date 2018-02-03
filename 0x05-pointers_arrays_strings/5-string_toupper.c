#include "holberton.h"

/**
 * *string_toupper - Changes all lowercase letters to uppercase.
 * @s: Pointer to char array s.
 *
 * Return: s (char value containing entire string array.)
 */
char *string_toupper(char *s)
{
	int pos;

	for (pos = 0; s[pos] != '\0'; pos++)
		if (s[pos] >= 'a' && s[pos] <= 'z')
			s[pos] = s[pos] - 32;

	return (s);
}
