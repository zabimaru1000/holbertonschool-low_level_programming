#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void pr_char(va_list list);
void pr_int(va_list list);
void pr_float(va_list list);
void pr_str(va_list list);

void print_all(const char * const format, ...)
{
	int i;
	va_list list;

	va_start(list, *format);

        p_t pr_format[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};
	i = 0;

	while (format[i] != NULL)
	{
		pr_format[i].f(list);
		i++;
	}

}

void pr_char(va_list list)
{
	printf("%c, ", va_arg(list, int));
}
void pr_int(va_list list)
{
	printf("%d, ", va_arg(list, int));
}
void pr_float(va_list list)
{
	printf("%f, ", va_arg(list, double));
}
void pr_str(va_list list)
{
	printf("%s", va_arg(list, char *));
}
