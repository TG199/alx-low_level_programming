#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index(idx)
 * @h: Head node
 * @idx: index to add node
 * @n: node data
 *  Return: node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int len;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	len = 0,
	temp = *h;

	if (idx == 0)
	{
		add_dnodeint(h, n);
	}

	while (temp != NULL)
	{
		if (len == idx)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			temp->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		len++;
	}

	
	if (len == idx)
	{
		add_dnodeint_end(h, n);
	}
	free(new_node);
	return (NULL);
}
