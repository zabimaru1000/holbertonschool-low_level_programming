#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to pointer s containing a char array.
 * @needle: Pointer to pointer f containing a char array (usually substring)
 *
 * Description: Loops through needle within haystack to check substring.
 *
 * Return: haystack + i or 0 (Either a char value or NULL)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack [i+j] != needle[j])
			    break;
		}

		if (needle[j] == '\0')
			return (haystack + i);
        }

	return (0);
}
