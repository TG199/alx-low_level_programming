#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node to end of list
 * @head: head of list
 * @str: string of new node
 *
 * Return: new node address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *temp;

	last_node = malloc(sizeof(list_t));

	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		return (NULL);
	}
	last_node->len = strlen(str);

	if (*head == NULL)
	{
		(*head) = last_node;
		return (last_node);
	}

	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = last_node;
	last_node->next = NULL;
	return (last_node);

}
