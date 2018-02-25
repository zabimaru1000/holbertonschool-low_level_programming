#include "variadic_functions.h"

void pr_char(va_list list);
void pr_int(va_list list);
void pr_float(va_list list);
void pr_str(va_list list);

/**
 * print_all - Function that prints anything in the arguments.
 * @format: Format string.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator;
	va_list list;
	p_t pre[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};

	va_start(list, format);

	i = 0;
	j = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		while (pre[j].fp != NULL)
		{
			if (format[i] == pre[j].fp[0])
			{
				printf("%s", separator);
				pre[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(list);
}

/**
 * pr_char - Prints a char.
 * @list: Argument list.
 */
void pr_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * pr_int - Prints an int.
 * @list: List of argument
 */
void pr_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * pr_float - Prints a float.
 * @list: List of argument.
 */
void pr_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * pr_str - Prints a string.
 * @list: List of arguments.
 */
void pr_str(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
