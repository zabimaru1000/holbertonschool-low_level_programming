#include "lists.h"

/**
 * add_nodeint_end - Adds new node at end of list.
 * @head: Typedef pointer to a pointer to head.
 * @n: Any const integer.
 * Return: new (address of new element)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *new, *get;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		get = *head;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}

		for (i = 0; get->next != NULL; i++)
			get = get->next;

		get->next = new;
		return (new);
	}

	return (NULL);
}
