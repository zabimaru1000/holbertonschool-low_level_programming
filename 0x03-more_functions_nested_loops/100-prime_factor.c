#include <stdio.h>
#include <math.h>

int main(void)
{
	long num = 612852475143;
	int i, res;

	res = (sqrt(num) / 10) + 1;

	for (i = res; i > 1; i--)
	{
		if (num % i == 0)
		{
			num = (num / i);
			printf("%ld\n", num);
		}
	}

	return (0);
}
