#include "holberton.h"

/**
 * _memcpy - Copies a certain memory area.
 * @dest: pointer to char array buffer.
 * @src: pointer to char array buffer2.
 * @n: unsigned integer value containing how many times to get value in b.
 *
 * Description: Checks how many values to get from buffer2.
 * Description (cont): Copies up to 10 elements to the dest array.
 *
 * Return: dest (contains the new array that has the copied elements.)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
