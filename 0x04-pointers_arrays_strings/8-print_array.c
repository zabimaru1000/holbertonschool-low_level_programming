#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print n number of elements of an array of integers.
 * @a: Pointer to memory address of variable array.
 * @n: How many elements of an array are there
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));

	}

}
