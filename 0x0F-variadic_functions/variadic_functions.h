#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct pre
{
	char *fp;
	void (*f)(va_list);

} p_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
