#include <stdio.h>

/**
 * main - Prints numbers of base 10 starting from 0 with specific syntax.
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 100; num++)
	{
		putchar('0' + num / 10);
		putchar('0' + num % 10);

		if (num < 99)
			putchar(',');
		if (num < 99)
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
