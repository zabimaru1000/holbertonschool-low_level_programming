#include "lists.h"

/**
 * get_dnodeint_at_index - Returns Nth node of a linked list.
 * @head: pointer to pointer of struct.
 * @index: unsigned int to be compared with loop.
 * Return: new, the head node's data (n).
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new;

	new = head;

	if (head != NULL)
	{
		i = 0;
		while (new != NULL)
		{
			if (i == index)
				return (new);
			new = new->next;
			i++;
		}

	}

	return (NULL);
}
