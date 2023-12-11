#include "lists.h"


/**
 * free_listint - free elements of a list
 * @head: head of list
 *
 * Return: An empty list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	if ((*head) == NULL || head == NULL)
			return;
	current = *head;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		free(current);
		current = next_node;
	}
	(*head) = NULL;
}
