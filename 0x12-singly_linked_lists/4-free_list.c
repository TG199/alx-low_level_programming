#include "lists.h"



/**
 * free_list - free all elements in a list
 * @head: head of list to free
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;


	while (temp != NULL)
	{
		list_t *next = temp->next;

		free(temp->str);
		free(temp);
		temp = next;
	}
}




