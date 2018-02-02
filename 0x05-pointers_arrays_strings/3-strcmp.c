#include "holberton.h"

/**
 * _strcmp - Compare difference between two strings
 * @s1: pointer to memory address that gets value of s1.
 * @s2: pointer to memory address that gets value of s2.
 *
 * Description: Loops to count num as long as s1 = s2 and s1 is not NULL.
 * Description (cont): Conditionals that evaulate the difference between char.
 *
 * Return: 0, positive, or negative (int type variable that holds difference.)
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	for (num = 0; (s1[num] == s2 [num]) && (s1[num] != '\0'); num++)
	;

	if (s1[num] < s2[num])
	{
		return (-15);
	}
	else if (s1[num] > s2[num])
	{
		return (15);
	}
	else
		return (0);

}
