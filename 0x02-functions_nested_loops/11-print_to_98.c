#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - Prints numbers up to 98 depending on where it starts.
 * @n: Integer that is taken from main to be used in function.
 * Description: Uses if else conditionals to print numbers.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);

	else if (n < 98)
		for (n = n; n < 99; n++)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
		}

	else
		for (n = n; n > 99; n--)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
		}

	printf("\n");
}
