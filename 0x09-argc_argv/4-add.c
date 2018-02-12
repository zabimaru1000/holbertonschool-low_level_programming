#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Unused attribute, will not produce warning in the compiler.
 * @argv: Argument vector containing array of strings
 *
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int vcount;

	if (vcount = 0; vcount < argc; vcount++)
		printf("%d\n", atoi(argv[vcount]) + atoi(argv[vcount]));

	return (0);
}
