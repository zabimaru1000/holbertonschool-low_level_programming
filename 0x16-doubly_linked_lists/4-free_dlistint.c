#include "lists.h"

/**
 * free_dlistint - Frees memory allocated for linked list.
 * @head: Pointer to struct
 */
void free_dlistint(dlistint_t *head)
{
	size_t i;
	dlistint_t *tmp;

	if (head != NULL)
	{
		i = 0;
		while (head != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
			i++;
		}
	}
}
