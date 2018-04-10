#include "lists.h"

/**
 * add_node_end - Adds nodes at the end of linked list.
 * @head: Pointer to beginning of address of struct.
 * @str: Char pointer to str.
 *
 * Return: new_last on success, NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, j;
	list_t *new_last, *get_node;

	for (i = 0; str[i] != '\0'; i++)
	;

	new_last = malloc(sizeof(list_t));

	if (new_last != NULL)
	{
		new_last->str = strdup(str);
		new_last->len = i;
		new_last->next = NULL;
		get_node = *head;

		if (*head == NULL)
		{
			*head = new_last;
			return (new_last);
		}

		for (j = 0; get_node->next != NULL; j++)
			get_node = get_node->next;

		get_node->next = new_last;
		return (new_last);

	}

	return (NULL);
}
