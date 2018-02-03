#include "holberton.h"

/**
 * reverse_array - Sorts out integer array in reverse.
 * @a: Pointer variable to int a, an array of integers.
 * @n: Pointer variable to number of indexes to swap.
 *
 */
void reverse_array(int *a, int n)
{
	int i, store;

	n--;

	for (i = 0; i <= n; i++)
	{
		store = a[i];
		a[i] = a[n];
		a[n] = store;
		n--;
	}
}
