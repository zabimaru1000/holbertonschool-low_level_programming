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
	int vcount = 0;

	if (argc == 0)
		printf("0\n");

	if (vcount < argc)
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));

	return (0);
}
