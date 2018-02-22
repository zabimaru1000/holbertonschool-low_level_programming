#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers
 * @a: Number a.
 * @b: Number b.
 * Return: sum (Sum of two numbers)
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - Points to two functions & derefrences them for each element
 * @a: Int pointer to an array of numbers.
 * @b: Size of array.
 * Return: sub (Pointer to function print_elem or print_elem_hex.
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - Points to two functions & derefrences them for each element
 * @a: Int pointer to an array of numbers.
 * @b: Size of array.
 * Return: pro (Pointer to function print_elem or print_elem_hex.
 */
int op_mul(int a, int b)
{
	int pro;

	pro = a * b;
	return (pro);
}

/**
 * op_div - Points to two functions & derefrences them for each element
 * @a: Int pointer to an array of numbers.
 * @b: Size of array.
 * Return: div (Pointer to function print_elem or print_elem_hex.
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - Points to two functions & derefrences them for each element
 * @a: Int pointer to an array of numbers.
 * @b: Size of array.
 * Return: mod (Pointer to function print_elem or print_elem_hex.
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
