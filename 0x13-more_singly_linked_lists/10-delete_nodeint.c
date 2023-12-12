#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: head of node list
 * @index: index of node to delete
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev, *temp;
	unsigned int node_idx;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}

	current = (*head);
	prev = NULL;

	for (node_idx = 0; current != NULL && node_idx != index; node_idx++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);

}
