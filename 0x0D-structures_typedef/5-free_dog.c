#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Allocates memory for struct dog and frees it.
 * @d: struct dog
 *
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(struct dog_t));
	free(dog_t);

}
