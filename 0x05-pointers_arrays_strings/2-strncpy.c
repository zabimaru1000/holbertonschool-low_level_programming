#include "holberton.h"

/**
 * _strncpy - Copies a string with a certain amount of n elements.
 * @dest: pointer that points to the char array dest.
 * @src: pointer that points to the char array src.
 * @n: an integer n representing the number of bytes to string src.
 *
 * Description: Counts through the initial src array until it reaches NULL.
 * Description (cont): Inside the loop, the src string is appended to dest.
 *
 * Return: dest (string that contains the copied input).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ptA;

	for (ptA = 0; src[ptA] != '\0' && ptA < n; ptA++)
		dest[ptA] = src[ptA];

	for (; n > ptA; ptA++)
		dest[ptA] = src[ptA];

	return (dest);
}
