#include <stdio.h>

/**
 * main - Declares variables, runs for loop, and prints an int.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, add;

	add = 0;

	for (i = 1; i < 1025; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			add += i;
	}

	printf("%d\n", add);

	return (0);
}
