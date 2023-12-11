#include "lists.h"


/**
 * free_listint - free elements of a list
 * @head: head of list
 *
 * Return: An empty list
 */
void free_listint2(listint_t **head)
{
	while ((*head) != NULL)
	{
		listint_t *current = (*head)->next;

		free((*head));
		(*head) = current;
	}
	(*head) = NULL;
}
