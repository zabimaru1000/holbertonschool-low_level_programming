#include "holberton.h"

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


void one (int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	_putchar('0' + n);
}

void two (int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));
}

void three (int n)
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

void four (int n)
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
