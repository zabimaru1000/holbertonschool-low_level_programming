#include <stdio.h>

/**
 * main - Uses std library to print file name using defined macro.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
