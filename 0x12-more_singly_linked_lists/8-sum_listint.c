#include "lists.h"

/**
 * sum_listint - Returns the sum of ints from linked list.
 * @head: Typedef pointer to head
 * Return: sum (the sum of ints)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *store;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			store = head->next;
			head = store;
		}

		return (sum);
	}

	return (0);
}
