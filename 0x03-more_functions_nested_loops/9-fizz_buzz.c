#include <stdio.h>

/**
 * main - Main function
 * Description: Solution to FizzBuzz
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");


	return (0);
}