#include "holberton.h"

int _strlen(char *s);

char *_strncat(char *dest, char *src, int n)
{
        int getA, getB;

        getA = _strlen(dest);

        for (getB = 0; src[getB] != '\0'; getB++)
        {
                dest[getA] = src[getB] + n;
        }

        return (dest);
}

int _strlen(char *s)
{
        int init;

        for (init = 0; s[init] != '\0'; init++)
		;

        return (init);

}
