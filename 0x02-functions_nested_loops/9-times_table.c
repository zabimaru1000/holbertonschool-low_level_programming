#include "holberton.h"

void times_table(void);

void times_table(void)
{
	int loop;

	for (loop = 0; loop < 10; loop = loop + 1)
	{
		_putchar(loop + '0');
		if (loop < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

	for (loop = 0; loop < 19; loop = loop + 2)
        {
                _putchar(loop + '0');
                if (loop < 19)
                {
                        _putchar(',');
                        _putchar(' ');
                }
        }
        _putchar('\n');

}
