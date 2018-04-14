#include "lists.h"
/**
 * free_listint - Frees memory allocated for linked list.
 * @head: Typedef pointer
 */
void free_listint(listint_t *head)
{
	int i;
	listint_t *store;

	if (head != NULL)
	{
		for (i = 0; head != 0; i++)
		{
			store = head->next;
			free(head);
			head = store;
		}
	}
}
