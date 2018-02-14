#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * str_concat - Allocates memory to concatenate two strings.
 * @s1: Char pointer to the 1st string.
 * @s2: Char pointer to the 2nd string to be attached.
 *
 * Return: memcat (Both strings combined on new allocated memory.)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b, total_len;
	char *memcat;

	a = _strlen(s1);
	b = _strlen(s2) + 1;
	total_len = a + b;
	memcat = malloc(sizeof(char) * total_len);

	if (s1 == '\0')
		s1 = "";

	if (s2 == '\0')
		s2 = "";

	if (memcat == '\0')
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		memcat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		memcat[i + j] = s2[j];

	memcat[i + j] = '\0';

	return (memcat);
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
