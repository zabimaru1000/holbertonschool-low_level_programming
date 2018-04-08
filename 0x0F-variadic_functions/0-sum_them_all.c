#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Uses variadic functions to add every argument.
 * @n: Integers to be added.
 * Return: result (Sum of the added integers)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, result;

	va_start(list, n);

	if (n == 0)
		return (0);

	result = 0;
	for (i = 0; i < n; i++)
		result += va_arg(list, int);

	va_end(list);
	return (result);
}
