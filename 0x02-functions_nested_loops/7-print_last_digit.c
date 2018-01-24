#include "holberton.h"

int print_last_digit(int);

/**
 * print_last_digit - Prints last digit of an integer.
 *
 * @num: An integer evaluated parameter in the function
 *
 *
 * Return: int num (returns ASCII value in num to main)
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = (num % 10) * (-1);
		_putchar('0' + num);
	}

	else
	{
		num = num % 10;
		_putchar(48 + num);
	}

	return (num);
}
