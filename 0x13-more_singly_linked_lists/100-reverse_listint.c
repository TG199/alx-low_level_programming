#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of node list
 *
 * Return: new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = (*head);
		(*head) = next;
	}
	(*head) = prev;
	return ((*head));
}
