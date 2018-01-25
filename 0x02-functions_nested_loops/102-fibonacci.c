#include <stdio.h>

/**
 * main - Declares four long integers, and goes through a for loop.
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	long int i, one = 0, two = 1, add;

	for (i = 0; i < 51; i++)
	{
		if (i <= 1)
			add = i;
		else
		{
			add = one + two;
			one = two;
			two = add;
		}
		if (i < 50)
			printf("%ld, ", add);
		else
			printf("%ld", add);
	}

	printf("\n");

	return (0);
}
