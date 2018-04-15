#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds new node at a given position.
 * @h: pointer to a pointer of struct.
 * @idx: Unsigned int
 * @n: New node to be inserted.
 * Return: new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	tmp = *h;

	if (new != NULL)
	{
		new->n = n;

		i = 0;
		while (h != NULL && i == idx)
		{
			new->next = *h;
			tmp = tmp->next;
			*h = new;
			i++;
			return (new);
		}
	}

	return (NULL);
}
