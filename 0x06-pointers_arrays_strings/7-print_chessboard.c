#include "holberton.h"

/**
 * print_chessboard - Prints a chessboard format with char types as pieces.
 * @a: pointer to pointer of char array board..
 *
 * Description: Needs two integers to count through two arrays until NULL..
 * Description (cont): Initally counts through rows first then inside, columns.
 * Description (cont): Inside columns until NULL is reached, print the 2D array.
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; *a[i] != '\0'; i++)
	{
		for (j = 0; *a[j] != '\0'; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}

}
