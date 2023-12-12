#include "lists.h"


/**
 * free_listint2 - free elements of a list
 * @head: head of list.
 *
 * Description: this function free all elements of a list and
 * set the head to NULL
 * Return: An empty list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head != NULL)
	{

		current = (*head);

		while (current != NULL)
		{
			next_node = current->next;

			free(current);
			current = next_node;
		}
		(*head) = NULL;
	}
}
