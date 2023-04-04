#include "lists.h"

/**
 * listint_len - Return elements
 * @h: Elements to return
 *
 * Description: This function returns the number of elements in a linked list
 * Return: list items;
 */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; elements++)
	{
		h = h->next;
	}
	return (elements);
}
