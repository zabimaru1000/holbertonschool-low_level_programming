#include "lists.h"

/**
 * add_node - Adds node at the beginning of linked list
 * @head: Pointer to struct
 * @str: String passed as argument.
 *
 * Return: Address of element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t new;

	for (i = 0; head != NULL; i++)
	{
		new = malloc(sizeof(list_t head));
		head->str;
		new = strdup(str);
		head = head->next;
		new = head;
	}

	return (&head);
}
