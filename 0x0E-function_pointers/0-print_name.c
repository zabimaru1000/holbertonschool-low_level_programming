#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Points to a different function and dereferences.
 * @name: Pointer to name in argument.
 * @f: Pointer to function returning void with a ptr argument.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);

}
