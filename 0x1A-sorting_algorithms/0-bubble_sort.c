#include "sort.h"

/**
 * bubble_sort - Sorts array of integers in ascending order w/ bubble sort
 * @array: Integer of arrays
 * @size: number of elements in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t index = 0, i;
	int temp;

	if (array == NULL)
		return;

	while (index < size - 1)
	{
		i = 0;
		while (i < size - index - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}

			i++;
		}

		index++;
	}
}
