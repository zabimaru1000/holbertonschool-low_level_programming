#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - Prints strings followed by newline.
 * @separator: A char pointer to a constant ", "
 * @n: Constant int set to one number.
 */
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

		if (i < n - 1)
		{
			if (c == NULL)
			{
				printf("(nil)%s", separator);
			}
			else
				printf("%s%s", c, separator);
		}
		else
		{
			if (c == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", c);
		}
	}

	printf("\n");
	va_end(list);
}
