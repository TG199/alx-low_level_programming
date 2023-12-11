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
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);

}

