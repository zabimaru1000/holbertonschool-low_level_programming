#include "lists.h"

/**
 * list_len - returns element of linked list
 * @h: Pointer to struct
 *
 * Return: 0 if NULL, i if success (elements).
 */
size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
		return (0);

	if (h != NULL)
		i++;

	list_len(h->next);

	return (i);

}
