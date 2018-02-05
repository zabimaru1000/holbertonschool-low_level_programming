#include "holberton.h"

/**
 * rot13 - Encodes a string through rot13.
 * @s: Pointer to char array to s.
 *
 * Return: s (char value that contains encoded string)
 */
char *rot13(char *s)
{
	int ptA, ptB;

	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (ptA = 0; s[ptA] != '\0'; ptA++)
	{
		for (ptB = 0; letter[ptB] != '\0'; ptB++)
			if (s[ptA] == letter[ptB])
			{
				s[ptA] = rot13[ptB];
				break;
			}
		ptB = 0;
	}

	return (s);
}
