#include "holberton.h"

/**
 * leet - Encrypts certain characters with integers
 * @s: pointer to char array s.
 *
 * Description: Compares to paralell arrays to convert char to numbers.
 * Description (cont): Uses loop to count through the original string.
 *
 * Return: s (char array that contains new string.)
 */
char *leet(char *s)
{
	int ptA, ptB;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (ptA = 0; s[ptA] != '\0'; ptA++)
		for (ptB = 0; let[ptB] != '\0'; ptB++)
			if (s[ptA] == let[ptB])
				s[ptA] = num[ptB];

	return (s);
}
