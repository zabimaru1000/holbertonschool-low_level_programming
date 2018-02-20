#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Uses special header to print contents of struct dog.
 * @d: struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
