#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list that has an int
 * @h: pointer to struct containing the 1st element of list.
 * Return: 0 if h is NULL, or returns number of elements in list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h != NULL; i++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}

		return (i);
	}

	return (0);
}
