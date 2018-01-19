#include <stdio.h>

/**
 * main - Prints alphabet char combination.
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha, caps;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		putchar(alpha);

	for (caps = 'A' ; caps <= 'Z' ; caps++)
		putchar(caps);

	putchar('\n');

	return (0);
}
