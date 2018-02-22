#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Points to two functions & derefrences them for each element
 * @s: Int pointer to an array of numbers.
 * Return: s
 */
int (*get_op_func(char *s))(int, int)
{
	get_op_func("+")(*op_add);
	get_op_func("-")(*op_sub);
	get_op_func("*")(*op_mul);
	get_op_func("/")(*op_div);
	get_op_func("%")(*op_mod);

	return (s);
}
