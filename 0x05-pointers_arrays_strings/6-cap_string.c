#include "holberton.h"

char *cap_string(char *s)
{
	int ptA, ptB;
	char space[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (ptA = 0; s[ptA] != '\0'; ptA++)
	{
		for (ptB = 0; space[ptB] != '\0'; ptB++)
			if (s[ptA] == space[ptB])
				s[ptA + 1] -=  32;
	}

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	return (s);
}
