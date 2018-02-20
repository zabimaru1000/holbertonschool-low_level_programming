#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Uses special header to print contents of struct dog.
 * @d: struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
