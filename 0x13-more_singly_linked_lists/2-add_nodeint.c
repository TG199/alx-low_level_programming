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

	new_node = (listint_t *) malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	new_node->next = (*head);

	(*head) = new_node;

	if ((*head) != NULL)
	{
		return (*head);
	}
	else
	{
		return (NULL);
	}
}