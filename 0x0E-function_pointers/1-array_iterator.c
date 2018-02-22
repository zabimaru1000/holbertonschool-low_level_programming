#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Points to two functions & derefrences them for each element
 * @array: Int pointer to an array of numbers.
 * @size: Size of array.
 * @action: Pointer to function print_elem or print_elem_hex.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
