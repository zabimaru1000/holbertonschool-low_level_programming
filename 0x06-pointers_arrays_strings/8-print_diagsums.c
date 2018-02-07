#include "holberton.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, matrix, less, add = 0, altAdd = 0;

	matrix = (size * size);
	less = (size - 1);

	for (i = 0; i < matrix; i++)
	{
		add += add + a[i];
		for (i = less; i < (size * less); i = i + less)
			altAdd += altAdd + a[i];
	}

	printf("%d, %d", add, altAdd);

}
