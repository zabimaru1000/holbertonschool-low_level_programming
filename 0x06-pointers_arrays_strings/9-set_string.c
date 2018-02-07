#include "holberton.h"

/**
 * set_string - Sets value of pointer to char.
 * @s: double pointer to a pointer of address of s1.
 * @to: pointer to pointer of s0.
 *
 * Description: Deferences value of to inside pointer s.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
