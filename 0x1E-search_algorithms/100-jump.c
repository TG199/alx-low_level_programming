#include "search_algos.h"

/**
 * jump_search - Jump search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value ro search for
 *
 * Return: index of array
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, right, left, prev;

	if (!array || size == 0)
		return (-1);

	right = (int)sqrt((double)size);
	left = 0;
	prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);

		left++;
		prev = idx;
		idx = left * right;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
