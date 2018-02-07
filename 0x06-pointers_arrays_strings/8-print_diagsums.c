#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints two sums of two diagonals in a square matrix of ints
 * @a: Pointer to int array c.
 * @size: integer type that contains the size of the array.
 *
 * Description: Loops through two different diagonals that print total sum.
 * Description (cont): After both loops have been checked, prints the two sums.
 */
void print_diagsums(int *a, int size)
{
	int i, add = 0, altAdd = 0;

	for (i = 0; i < (size*size); i += size + 1)
		add += a[i];

	for (i = size - 1; i < (size*size-1); i += size - 1)
		altAdd += a[i];

	printf("%d, %d\n", add, altAdd);

}
