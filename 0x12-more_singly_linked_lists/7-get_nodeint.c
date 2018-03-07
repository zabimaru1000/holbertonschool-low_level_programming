#include "lists.h"

/**
 * get_nodeint_at_index - Returns Nth node of a linked list.
 * @head: typedef pointer.
 * @index: unsigned int to be compared with loop.
 * Return: head node's data (n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int i;

	new = head;

	if (head != NULL)
	{
		i = 0;
		while (new != NULL)
		{
			if (i == index)
			{
				return (new);
			}

			i++;

			new = new->next;
		}
	}

	return (NULL);
}
