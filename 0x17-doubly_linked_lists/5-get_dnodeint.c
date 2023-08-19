#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node
 * @index: index position of node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0;

	temp = head;
	while (temp != NULL)
	{
		if (len == index)
		{
			return (temp);
		}
		else
		{

			len++;
			temp = temp->next;
		}

	}
	return (NULL);

}
