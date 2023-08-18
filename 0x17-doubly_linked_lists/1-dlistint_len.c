#include <stdio.h>
#include "lists.h"


/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head node
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;

	}

	return (i);
}
