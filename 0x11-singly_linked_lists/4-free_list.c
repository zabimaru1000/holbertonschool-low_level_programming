#include "lists.h"

/**
 * free_list - Frees memory allocated from linked list.
 * @head: Pointer to struct head.
 *
 */
void free_list(list_t *head)
{
	int i;
	list_t *store_node;

	if (head != NULL)
	{
		for (i = 0; head != 0; i++)
		{
			store_node = head->next;
			free(head->str);
			free(head);
			head = store_node;
		}
	}
}
