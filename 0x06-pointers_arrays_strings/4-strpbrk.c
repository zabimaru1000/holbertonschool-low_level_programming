#include "holberton.h"

/**
 * _strpbrk - Searches the first instance of s that matches any char in accept.
 * @s: pointer to pointer of char array s.
 * @accept: pointer to pointer of char array f.
 *
 * Description: Like in strspn, counts through accept until s reaches NULL
 * Description (cont): Returns array s if both arrays match in value.
 *
 * Return: s or 0 (s if at least a char is matched in accept, or 0 if none.)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; s++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s);

	return (0);
}
