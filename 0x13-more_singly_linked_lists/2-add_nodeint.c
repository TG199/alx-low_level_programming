#include "lists.h"

/**
 * add_nodeint - Add new node
 * @head: Address of node
 * @n: node data
 *
 * Description: This function adds a new node to the
 * beginning of a node
 * Return:Head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if ((*head) == NULL)
	{
		new_node->next = NULL;
		(*head) = new_node;
		return (new_node);
	}
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
