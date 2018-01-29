#include "holberton.h"

int _strlen(char *s)
{
	char init;

	for (init = 0; s[init] != '\0'; init++)
		return (init);
}
