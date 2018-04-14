#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list.
 * @h: Typedef pointer to h.
 * Return: i (Number of elements).
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);

}
