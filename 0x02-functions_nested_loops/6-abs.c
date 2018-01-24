#include "holberton.h"

int _abs(int);

/**
 * _abs - Calculates the absolute value of an integer.
 *
 * @num: Evaualted parameter in the function.
 *
 *
 * Return: int result (returns absolute value of num to main)
 */
int _abs(int num)
{

	if (num == 0)
		num = 0;

	else if (num < 0)
		num = (num / -1);

	else
		num = (num / 1);

	return (num);
}
