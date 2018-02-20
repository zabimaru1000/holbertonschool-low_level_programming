#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Allocates memory for struct dog and frees it.
 * @d: struct dog
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
