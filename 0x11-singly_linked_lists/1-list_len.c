#include "lists.h"

/**
 * list_len - returns element of linked list
 * @h: Pointer to struct
 *
 * Return: 0 if NULL, i if success (elements).
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);

}
