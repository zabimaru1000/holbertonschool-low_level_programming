#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *c;

	va_start(list, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);

		if (c == NULL)
			return;

		else if (i < n - 1)
		{
			printf("%s%s", c, separator);
		}
		else
		{
			printf("%s", c);
		}
	}

	printf("\n");
	va_end(list);
}
