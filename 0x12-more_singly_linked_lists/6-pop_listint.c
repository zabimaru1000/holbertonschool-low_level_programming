#include "lists.h"

/**
 * pop_listint - Deletes head node of linked list.
 * @head: typedef pointer.
 * Return: head node's data (n).
 */

int pop_listint(listint_t **head)
{
	int tmp_n;
	listint_t *new;


	if (*head != NULL)
	{
		new = *head;
		tmp_n = new->n;
		*head = new->next;
		free(new);
		return (tmp_n);
	}

	return (0);
}
