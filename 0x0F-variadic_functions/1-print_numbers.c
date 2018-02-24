#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, b;

	va_start(list, n);

	if (separator == NULL)
		return;

	va_arg(list, b);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", b, separator);
	}

        printf("\n");
	va_end(list);

}
