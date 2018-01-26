#include <stdio.h>
#include <math.h>

/**
 * main - Prints largest factor of 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
	int i, res;

	res = (sqrt(num) / 10) + 1;

	for (i = res; i > 1; i--)
	{
		if (num % i == 0)
			printf("%ld\n", num / i);
	}

	return (0);
}
