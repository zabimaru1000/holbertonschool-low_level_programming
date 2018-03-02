#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: Pointer to struct
 *
 * Return: 0 if NULL, i if success (elements).
 */
size_t print_list(const list_t *h)
{
	size_t i = 1;

	if (h == NULL)
	{
		return (0);
	}

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	i++;
	print_list(h->next);

	return (i);
}
