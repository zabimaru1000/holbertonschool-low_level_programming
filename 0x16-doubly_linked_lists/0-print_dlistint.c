#include "lists.h"

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
