#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by new line.
 * @separator: A char pointer to a constant ", "
 * @n: Constant int set to one number.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(list, unsigned int), separator);
		else
			printf("%d", va_arg(list, unsigned int));
	}

	printf("\n");
	va_end(list);

}
