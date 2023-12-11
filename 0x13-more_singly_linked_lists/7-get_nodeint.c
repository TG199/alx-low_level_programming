#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: head of linked list
 * @index: index of node
 *
 * Return:node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_at_index;
	listint_t *temp;

	node_at_index = 0;
	temp = head;

	while (temp != NULL)
	{
		if (node_at_index == index)
			return (temp);
		temp = temp->next;
		node_at_index++;
	}
	return (NULL);
}
