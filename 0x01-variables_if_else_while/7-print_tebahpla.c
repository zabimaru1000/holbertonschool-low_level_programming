#include <stdio.h>

/**
 * main - Prints alphabet char combo in reverse
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
