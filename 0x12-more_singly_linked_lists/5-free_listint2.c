#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL.
 * @head: Typedef pointer to head.
 */
void free_listint2(listint_t **head)
{
	int i;
	listint_t *store;

	if (head != NULL)
	{
		for (i = 0; *head != NULL; i++)
		{
			store = *head;
			*head = store->next;
			free(store);
		}
	}

	return;
}
