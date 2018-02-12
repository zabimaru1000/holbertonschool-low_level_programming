#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments supplied to main.
 * @argv: Unused atrribute
 *
 * Return: 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);

}
