#include  "sort.h"

/**
 * selection_sort - Sorts array of integers by ascending order
 * @array: Pointer to array of integers
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, index;
	int temp;

	if (array == NULL)
		return;

	/*Loop until end of array is reached.*/
	while (i < size - 1)
	{
		index = i;
		j = i + 1;
		while (j < size)
		{
			if (array[index] > array[j])
				index = j;
			j++;
		}

		temp = array[i];
		array[i] = array[index];
		array[index] = temp;

		if (index != i)
			print_array(array, size);

		i++;
	}
}
