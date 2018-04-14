#include "lists.h"

/**
 * add_nodeint - Adds a new node at the top of list.
 * @head: Typedef pointer to pointer of head.
 * @n: Any const integer.
 * Return: new (address of the new element)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	return (NULL);
}
