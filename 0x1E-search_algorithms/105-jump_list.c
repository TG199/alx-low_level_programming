#include "search_algos.h"

/**
 * jump_list - Jump search algorithm
 *
 * @list: list to search
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, left, right;
	listint_t *prev;

	if (!list || size == 0)
		return (NULL);

	right = (size_t)sqrt((double)size);
	idx = 0;
	left = 0;

	do {
		prev = list;
		left++;
		idx = left * right;

		while (list->next && list->index < idx)
			list = list->next;

		if (list->next == NULL && idx != list->index)
			idx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
