#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of list.
 * @head: pointer to a pointer to struct.
 * @n: Any const integer.
 * Return: new (address of new element)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;
	size_t i;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		tmp = *head;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		i = 0;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			i++;
		}

		tmp->next = new;
		return (new);
	}

	return (NULL);
}
