#include "sort.h"

/**
 * insertion_sort_list - Sorts using insertion sort algorithm
 * @list: Struct representing doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	/* Declare node so we can go through linked list */
	listint_t *node;

	node = *list;
	node = node->next;

	if (*list == NULL || list == NULL)
		return;

	/* Scan through list until it reaches NULL */
	while (node != NULL)
	{
		while (node->prev != NULL && node->n < node->prev->n)
			node_swap(&node, &(*list));
		node = node->next;
	}
}

/**
 * node_swap - Implementation of using list to swap elements
 * @head: Pointer to node variable from main function
 * @list: Pointer to list starting from the head.
 */
void node_swap(listint_t **head, listint_t **list)
{
	listint_t *node;

	/* Assign node to as a temp variable that contains ptr to main node*/
	node = *head;

	node->prev->next = node->next;

	if (node->next != NULL)
		node->next->prev = node->prev;

	/*The next node and prev nodes will shift left*/
	node->next = node->prev;
	node->prev = node->prev->prev;
	node->next->prev = node;

	/*If prev node reaches NULL, node will be set back to the head node*/
	if (node->prev == NULL)
		*list = node;

	/*If prev node is not NULL, link the surrounding nodes*/
	if (node->prev != NULL)
		node->prev->next = node;

	print_list(*list);
}
