#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments in program.
 * @argv: Vector of arguments to print.
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int vcount;

	for (vcount = 0; vcount < argc; vcount++)
		printf("%s\n", argv[vcount]);

	return (0);

}
