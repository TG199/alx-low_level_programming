#include "lists.h"
#include <string.h>


/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: node to add
 *
 * Return: newnode
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup_str = strdup(str);

	list_t *new_node = malloc(sizeof(list_t));
	new_node->str = dup_str;

	if (new_node != NULL)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	

	return (NULL);
}	



