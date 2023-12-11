#include "lists.h"


/**
 * pop_listint - deletes the first element of the list
 * @head: head of list
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;

	if ((*head) == NULL)
		return (0);

	current = (*head)->next;
	free((*head));
	(*head) = current;
	return ((*head)->n);
}
