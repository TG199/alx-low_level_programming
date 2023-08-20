#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head node
 * index: node at index to delete
 *
 * Return: list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len;

	if (*head == NULL)
		return (-1);

	temp = *head;
	len = 0;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return(1);

	}

	while (temp != NULL)
	{
		if (len == index)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		len++;
	}
	return (-1);
			
}
