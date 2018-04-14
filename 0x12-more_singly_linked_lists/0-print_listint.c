#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list containing int type
 * @h: typedef pointer.
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
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
