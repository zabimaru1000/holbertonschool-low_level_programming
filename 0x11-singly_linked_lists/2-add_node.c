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
	list_t *new;

	for (i = 0; str[i] != '\0'; i++)
	;

	new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = i;
		new->next = *head;
		*head = new;
		return (new);
	}

	return (NULL);
}
