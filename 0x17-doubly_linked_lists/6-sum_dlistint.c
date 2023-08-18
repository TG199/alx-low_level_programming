#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data 
 * (n) of a dlistint_t linked list.
 * @head: head node
 *
 * Return: sum of data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
