#include "holberton.h"

void one(int n);
void two(int n);
void three(int n);
void four(int n);


/**
 * print_number - prints an integer accounting for any edge cases.
 * @n: Integer that takes the argument from main.
 *
 */
void print_number(int n)
{
	if (n >= -9 && n <= 9)
		one (n);

	else if ((n >= 10 && n <= 99) || (n <= -10 && n >= -99))
		two (n);

	else if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999))
		three (n);

	else if ((n >= 1000 && n <= 9999) || (n <= -1000 && n >= -9999))
		four (n);
}

/**
 * one - prints single digits.
 * @n: Integer that takes the argument from main.
 *
 */
void one(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	_putchar('0' + n);
}

/**
 * two - prints double digits.
 * @n: Integer that takes the argument from main.
 *
 */
void two(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}

/**
 * three - prints triple digits.
 * @n: Integer that takes the argument from main.
 *
 */
void three(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	_putchar('0' + n / 100);
	_putchar('0' + (n / 10) % 10);
	_putchar('0' + n % 10);
}

/**
 * four - prints four digits.
 * @n: Integer that takes the argument from main.
 *
 */
void four(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	_putchar('0' + n / 1000);
	_putchar('0' + (n / 100) % 10);
	_putchar('0' + (n / 10) % 10);
	_putchar('0' + n % 10);
}
