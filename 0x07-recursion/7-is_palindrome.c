#include "holberton.h"

/**
 * is_palindrome - Determine what string is a palindrome.
 * @s: pointer to char array s.
 *
 * Description: Check if array equals NULL.
 * Description (cont): Checks if two ends of the string match.
 *
 * Return: 1 or 0 (1 if palindrome, 0 if not)
 */
int is_palindrome(char *s)
{
	int i = 0, j = 0;

	if (s[j] == '\0')
	{
	}

	if (s[i] == s[j])
	{
		j--;
		return (0);
	}

	return (is_palindrome(&s[j + 1]));



}
