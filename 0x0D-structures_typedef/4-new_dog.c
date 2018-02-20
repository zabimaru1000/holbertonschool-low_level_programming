#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strdup(char *str);

/**
 * new_dog - Creates a new dog that is struct dog.
 * @name: Dog name
 * @age: Dog age
 * @owner: Owner name
 * Return: pup
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwn;
	dog_t *pup;

	pup = malloc(sizeof(dog_t));
	newName = _strdup(name);
	newOwn = _strdup(owner);

	if (pup == NULL)
		return (NULL);

	if (newName == NULL)
	{
		free(pup);
		return (NULL);
	}

	if (newOwn == NULL)
	{
		free(newName);
		free(pup);
		return (NULL);
	}

	pup->name = newName;
	pup->age = age;
	pup->owner = newOwn;

	return (pup);
}

/**
 * _strdup - Returns a char pointer to a new memory allocation.
 * @str: Char pointer
 *
 * Return: mem (Pointer to allocated memory in new_array set by size.)
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *mem;

	if (str == '\0')
		return ('\0');

	mem = malloc(sizeof(char) * _strlen(str) + 1);

	if (mem == '\0')
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		mem[i] = str[i];

	mem[i] = '\0';

	return (mem);
}

/**
 * _strlen - Returns an integer inside an array
 * @s: pointer with address variable from str.
 *
 * Return: init (An integer contained in an array)
 */
int _strlen(char *s)
{
	int init;

	for (init = 0; s[init] != '\0'; init++)
	{
	}

	return (init);
}
