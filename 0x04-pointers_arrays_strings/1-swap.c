#include "holberton.h"

/**
 * swap_int - Takes pointers to a and b and swaps their values.
 * @a: Pointer with memory address to a.
 * @b: Other pointer with memory address to b.
 * Description: Stores value in pointer to a to a placeholder variable.
 * Description (cont): a gets its value swapped, while b gets value from getA.
 *
 */
void swap_int(int *a, int *b)
{
	int getA;

	getA = *a;

	*a = *b;
	*b = getA;
}
