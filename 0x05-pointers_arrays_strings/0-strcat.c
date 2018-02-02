#include "holberton.h"

int _strlen(char *s);

/**
 * _strcat - Concatenate two strings
 * @dest: pointer to memory address that gets value of s1.
 * @src: pointer to memory address that gets value of s2.
 *
 * Description: Recalls strlen to count number of char in s1.
 * Description (cont): Runs a loop to append s2 to s1.
 * Description (cont): As long as s2 reaches NULL, add one empty index in s1.
 *
 * Return: dest (char type pointer variable to s1)
 */
char *_strcat(char *dest, char *src)
{
	int strA, strB;

	strA = _strlen(dest);

	for (strB = 0; src[strB] != '\0'; strA++)
	{
		dest[strA] = src[strB];
		strB++;
	}

	return (dest);
}

/**
 * _strlen - Counts length of a string
 * @s: pointer with address variable from str.
 *
 * Description: Loops an integer inside an array until it reaches NULL.
 * Description (cont): Gets a number after the loop ends
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
