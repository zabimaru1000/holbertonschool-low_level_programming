#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes Nth node of a doubly linked list.
 * @head: pointer to a pointer to struct.
 * @index: unsigned int to be compared with loop.
 * Return: DEL_SUCCESS or DEL_FAILURE
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new;

	new = *head;

	if (*head != NULL)
	{
		if (index == 0)
		{
			*head = new->next;
			free(new);
			return (DEL_SUCCESS);
		}

		i = 0;
		while (new != NULL)
		{
			if (i == index)
				return (DEL_SUCCESS);

			i++;
		}

		new = new->next;
	}

	return (DEL_FAILURE);
}
