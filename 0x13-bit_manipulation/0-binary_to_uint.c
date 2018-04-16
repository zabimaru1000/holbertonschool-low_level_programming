#include "holberton.h"

/**
 * binary_to_uint - Converts binary to decimal base 10.
 * @b: Binary contained in a string.
 * Return: sum (the binary result)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);

			else if (b[i] == '0')
				sum = sum << 1;

			else
			{
				sum = sum << 1;
				sum++;
			}

			i++;
		}

		return (sum);
	}

	return (0);
}
