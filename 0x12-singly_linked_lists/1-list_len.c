#include "lists.h"

/**
 * list_len - return number of elements
 * @h: Elements to count
 *
 * Description: This function returns the number of
 * elements in a structs data type
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
