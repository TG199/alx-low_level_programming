#include "search_algos.h"

/**
 * linear_search - A linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of array on success, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
