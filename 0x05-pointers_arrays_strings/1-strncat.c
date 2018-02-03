#include "holberton.h"

int _strlen(char *s);

/**
 * _strncat - Concatenate two strings except uses n bytes from src.
 * @dest: pointer to memory address that gets value of char dest
 * @src: pointer to memory address that gets value of char src
 * @n: integer that takes n bytes from string src.
 *
 * Description: Same concept as strcat except it is accounting for extra bytes.
 *
 * Return: dest (char type array depending on n bytes.
 */
char *_strncat(char *dest, char *src, int n)
{
	int getA, getB;

	getA = _strlen(dest);

	for (getB = 0; src[getB] != '\0' && getB < n; getB++)
	{
		dest[getA] = src[getB];
		getA++;
	}

	return (dest);
}

/**
 * _strlen - Returns an integer inside an array
 * @s: pointer with address variable from str.
 *
 * Description: Loops an integer inside an array until it reaches NULL.
 *
 * Return: init (An integer contained in an array)
 */
int _strlen(char *s)
{
	int init;

	for (init = 0; s[init] != '\0'; init++)
	;

	return (init);

}
