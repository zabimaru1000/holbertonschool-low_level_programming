#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the top of list.
 * @head: pointer to a pointer of struct.
 * @n: Any const integer.
 * Return: new (address of the new element)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (head != NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;

		if (head != NULL)
			new->prev = new;

		*head = new;
		return (new);
	}

	return (NULL);
}
