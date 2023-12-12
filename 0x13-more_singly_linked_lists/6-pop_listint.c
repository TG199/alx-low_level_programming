#include "lists.h"


/**
 * pop_listint - deletes the first element of the list
 * @head: head of list
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *current, *current_next;
	int current_data;

	if (*head == NULL)
		return (0);

	current = (*head);
	current_next = (*head)->next;
	current_data = (*head)->n;
	free(current);
	(*head) = current_next;
	return (current_data);
}
