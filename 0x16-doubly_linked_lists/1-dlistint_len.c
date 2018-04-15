#include "lists.h"

/**
 * dlistint_len - Returns number of elements of a doubly linked list
 * @h: pointer to struct containing the 1st element of list.
 * Return: 0 if h is NULL, or returns number of elements in list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h != NULL; i++)
			h = h->next;

		return (i);
	}

	return (0);
}
