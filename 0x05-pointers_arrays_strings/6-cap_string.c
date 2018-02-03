#include "holberton.h"

/**
 * cap_string - Converts all beginning of words to upper case characters.
 * @s: pointer to char array s.
 *
 * Description: Goes through each character to check for start of any word.
 * Description (cont): Uses ASCII to convert lowercase.
 *
 * Return: s (char array that contains new string.)
 */
char *cap_string(char *s)
{
	int ptA, ptB;
	char space[] = {',', ';', ' ', '\n', '\t', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (ptA = 0; s[ptA] != '\0'; ptA++)
	{
		for (ptB = 0; space[ptB] != '\0'; ptB++)
			if (s[ptA] == space[ptB])
				if (s[ptA + 1] >= 'a' && s[ptB + 1] <= 'z')
					s[ptA + 1] -=  32;
	}

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	return (s);
}
