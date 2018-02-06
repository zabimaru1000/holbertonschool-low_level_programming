#include "holberton.h"

/**
 * _strspn - Gets the length of a substring.
 * @s: pointer to pointer of char array s.
 * @accept: pointer to pointer of char array f.
 *
 * Description: Needs two integers to count through two arrays until NULL.
 * Description (cont): Until s reaches NULL, go through accept.
 * Description (cont): Until accept is NULL, break if both arrays are equal
 *
 * Return: i (contains the value of all characters in accept in s.)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				break;

		if (accept[j] == '\0')
			return (i);

	}

	return (i);
}
