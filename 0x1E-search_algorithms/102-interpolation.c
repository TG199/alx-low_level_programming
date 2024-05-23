#include "search_algos.h"

/**
 * interpolation_search - interpolation algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: idx of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t idx, low, high;
	double f;

	if (!array || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;


	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		idx = (size_t)(low + f);
		printf("Value checked array[%d]", (int)idx);

		if (idx >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[idx]);
		}

		if (array[idx] == value)
			return ((int)idx);
		if (array[idx] < value)
			low = idx + 1;
		else
			high = idx - 1;

		if (low == high)
			break;
	}
	return (-1);
}
