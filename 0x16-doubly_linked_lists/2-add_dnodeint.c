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

	new = *head;
	new = malloc(sizeof(dlistint_t));

	if (*head != NULL)
		(*head)->prev = new;

	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}

	return (NULL);
}
