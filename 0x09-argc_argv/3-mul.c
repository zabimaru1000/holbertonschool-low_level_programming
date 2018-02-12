#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Vector arguments as an array of char.
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int res;

	res = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
		printf("%d\n", res);

	else
		printf("Error\n");

	return (0);
}
