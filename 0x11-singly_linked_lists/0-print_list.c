#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: Pointer to struct
 *
 * Return: 0 if NULL, i if success (elements).
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}

	return (i);
}
