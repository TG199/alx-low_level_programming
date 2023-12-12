#include "lists.h"


/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: head of node list
 * @idx: given index
 * @n: node data
 *
 * Return: new_node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int node_idx;

	if ((head) == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 1)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return ((*head));
	}
	temp = (*head);

	for (node_idx = 0; temp != NULL && node_idx < idx - 1; node_idx++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

