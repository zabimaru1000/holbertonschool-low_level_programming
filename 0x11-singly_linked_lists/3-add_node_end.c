#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_last;

	for (i = 0; str[i] != '\0'; i++)
	;

	new_last = malloc(sizeof(list_t));

	if (new_last != NULL)
	{
		new_last->str = strdup(str);
		new_last->len = i;
		if (*head == NULL)
		{
			*head = new_last;
			new_last->next = *head;
		}
		new_last->next = *head;
		*head = new_last;
		return (new_last);
	}

	return (NULL);
}
