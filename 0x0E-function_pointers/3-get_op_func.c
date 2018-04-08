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
	while (ops[i].f != NULL)
	{
		if (s[1] == '\0' && *s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
