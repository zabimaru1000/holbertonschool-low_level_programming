#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Points to two functions & derefrences them for each element
 * @s: Int pointer to an array of numbers.
 * Return: s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while(ops[i].op && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}

	return (ops[i].f);
}
