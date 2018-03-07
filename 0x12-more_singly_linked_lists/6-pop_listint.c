#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list.
 * @head: typedef pointer.
 * Return: head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	tmp = *head;

	if (*head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			new = tmp;
			tmp = tmp->next;
			return (new->n);
		}
	}

	return (0);
}
