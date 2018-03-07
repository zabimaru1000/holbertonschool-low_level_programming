#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes Nth node of a linked list.
 * @head: typedef pointer to pointer.
 * @index: unsigned int to be compared with loop.
 * Return: head node's data (n).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	unsigned int i;

	new = *head;

	if (*head != NULL)
	{
		if (index == 0)
		{
			*head = new->next;
			free(new);
			return (1);
		}

		i = 0;
		while (new != NULL)
		{
			if (i == index)
				return (1);
		}

		i++;
		new = new->next;
	}


	return (-1);
}
