#include "holberton.h"

void reverse_array(int *a, int n)
{
	int i, store;

	for (n = 0; a[n] != '\0'; n++)
	;

	for (i = 0; i <= n; i++)
	{
		store = a[i];
		a[i] = a[n];
		a[n] = store;
		n--;
	}
}
