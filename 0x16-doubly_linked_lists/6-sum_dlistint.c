#include "lists.h"

/**
 * sum_dlistint - Adds all data in list.
 * @head: pointer to a pointer of struct.
 * Return: result (Addition result)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int result = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			result += head->n;
			tmp = head->next;
			head = tmp;
		}
		return (result);
	}

	return (0);
}
