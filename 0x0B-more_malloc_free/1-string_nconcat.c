#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - Concatenates two strings to a new allocated space.
 * @s1: Pointer to char containing string 1.
 * @s2: Pointer to char containing string 2.
 * @n: Number of bytes
 *
 * Return: mem (Pointer to newly allocated memory containing two strings.)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, a, b, total_len;
	char *mem;

	a = _strlen(s1);
	b = _strlen(s2);
	total_len = a + b + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= b)
		n = b;

	mem = malloc(sizeof(char) * total_len);

	if (mem == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		mem[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		mem[i] = s2[j];
		i++;
	}
	mem[i] = '\0';

	return (mem);

}

/**
 * _strlen - Returns an integer inside an array
 * @s: pointer with address variable from str.
 *
 * Description: Loops an integer inside an array until it reaches NULL.
 * Description (cont): Array contains the string "Holberton!"
 *
 * Return: init (An integer contained in an array)
 */
int _strlen(char *s)
{
	int init;

	for (init = 0; s[init] != '\0'; init++)
	{
	}

	return (init);

}
