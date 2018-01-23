#include <stdio.h>

/**
 * main - Prints numbers of base 10 starting from 0 with specific syntax.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);

		if (num < 9)
			putchar(',');
		if (num < 9)
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
