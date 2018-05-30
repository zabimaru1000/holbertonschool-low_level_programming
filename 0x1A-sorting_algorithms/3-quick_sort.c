#include "sort.h"

/**
 * quick_sort - Sorts array of integers using quick sort & lomuto partition
 * @array: Integer of arrays
 * @size: number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	recursion_sort(array, size, 0, size - 1);
}

/**
 * recursion_sort - Uses recursion to implement quicksort.
 * @array: Integer of arrays
 * @size: number of elements in array
 * @start: Array index to start at the beginning
 * @end: The last array index
 */
void recursion_sort(int *array, size_t size, int start, int end)
{
	int pi;

	/*Base case condition for recursion to end */
	if (start < end)
	{
		/* assigns a pivot number using the lomuto function*/
		pi = lomuto(array, size, start, end);
		/*recursive call the first time to set rightmost pivot left */
		/*recursive call again to set leftmost pivot right */
		recursion_sort(array, size, start, pi - 1);
		recursion_sort(array, size, pi + 1, end);
	}
}

/**
 * lomuto - Implementation of the lomuto partition. Prints array after swapping
 * @array: Integer of arrays
 * @size: number of elements in array
 * @start: Array index to start at the beginning
 * @end: The last array index
 * Return: The index for the pivot
 */
int lomuto(int *array, size_t size, int start, int end)
{
	int i = start - 1;
	int j = start;
	int pivot = array[end];
	int swap;

	while (j < end)
	{
		if (array[j] < pivot)
		{
			i += 1;

			swap = array[i];
			array[i] = array[j];
			array[j] = swap;

			if (i != j)
				print_array(array, size);
		}

		j++;
	}

	if (array[end] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[end];
		array[end] = swap;
		print_array(array, size);
	}

	return (i + 1);
}
