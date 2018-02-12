#include <stdio.h>

/**
 * main - Entry point
 * @argc: Unused attribute, will not produce warning in the compiler.
 * @argv: Argument vector containing array of strings
 *
 * Return: 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{

	printf("%s\n", *argv);

	return (0);

}
