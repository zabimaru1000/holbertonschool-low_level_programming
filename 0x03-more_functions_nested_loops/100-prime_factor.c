#include <stdio.h>
#include <math.h>

/**
 * main - Prints largest factor of 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long i, res, num = 612852475143;

	res = (sqrt(num) / 10) + 1;

	for (i = res; i > 1; i--)
	{
		if (num % i == 0)
		{
			num = num / i;
			printf("%ld", num);
		}
	}
	printf("\n");

	return (0);
}
