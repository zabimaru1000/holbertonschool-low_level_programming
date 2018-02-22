#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array containing set of numbers.
 * @size: Size containing number of array elements.
 * @cmp: Pointer to other functions.
 * Return: i (Element where array is found.)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
