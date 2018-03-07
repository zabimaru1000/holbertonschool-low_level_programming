#include "lists.h"

/**
 * insert_nodeint_at_index - Adds new node at Nth node of a linked list.
 * @head: typedef pointer to a pointer head.
 * @idx: unsigned int to be compared with loop.
 * @n: Integer to be added in list.
 * Return: head node's data (n).
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	tmp = *head;

	if (new != NULL)
	{
		new->n = n;

		i = 0;
		while (tmp != NULL && i == idx)
		{
			new->next = *head;
			tmp = tmp->next;
			*head = new;
			i++;
			return (new);
		}
	}

	return (NULL);
}
