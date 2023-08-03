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
	const char *dup_str = strdup(str);

	list_t *new_node = malloc(sizeof(list_t));
	new_node->str = dup_str;
	if (head == NULL)
	{
		return(new_node);
	}
	else
	{
		new_node->next = *head;
		if(new_node == 0)
			printf("[0
		else
			return(NULL);
	}
}	



