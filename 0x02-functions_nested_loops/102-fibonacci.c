#include <stdio.h>

/**
 * main - Declares four long integers, and goes through a for loop.
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	unsigned long i, one = 0, two = 1, add;

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
			printf("%lu, ", add);
		else
			printf("%lu", add);
	}

	printf("\n");

	return (0);
}
