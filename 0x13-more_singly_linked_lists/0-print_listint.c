#include "lists.h"

/**
 * print_listint - Print elements
 * @h: elements to print
 *
 * Description: This function prints all element of
 * a node list
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}

