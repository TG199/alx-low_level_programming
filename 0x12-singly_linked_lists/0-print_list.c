#include "lists.h"

/** 
 * print_list - Prints element
 * @h: pointer to elements.
 *
 * Description: This function prints all elements
 * of list_t.
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	
	while (h)
	{
		printf("[%u] [%s] \n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
