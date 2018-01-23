#include "holberton.h"

void print_alphabet(void);


/**
 * main - calls on the function print_alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Loops a character starting with 'a' and prints until z.
 *
 * Uses for loop and _putchar function.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');

}
