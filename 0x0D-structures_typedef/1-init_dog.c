#include "dog.h"

/**
 * init_dog - Initializes variable of struct dog
 * @d: Pointer to structure dog.
 * @name: Pointer to char containing name.
 * @age: Float type containing age value.
 * @owner: Pointer to char containing owner.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
