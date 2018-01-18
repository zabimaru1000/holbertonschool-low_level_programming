#include <stdio.h>

/**
 * main - Prints 26 letter string containing lowercase alphabet.
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
