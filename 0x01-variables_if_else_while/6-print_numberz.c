#include <stdio.h>

/**
 * main - Prints numbers of base 10 starting from 0.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	putchar('\n');

	return (0);
}
