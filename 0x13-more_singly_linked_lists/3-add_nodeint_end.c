#include "lists.h"

/**
 * add_nodeint_end - Add node to end of linked list
 * @head: head od node
 * @n: node data
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if ((*head) == NULL)
	{
		new_node->next = NULL;
		(*head) = new_node;
		return (new_node);
	}

	temp = (*head);
	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->next = NULL;
	return (new_node);
}

